var Xw = 700
var Yw = 450
var lienzo

function cambia(c) {
    return [ Xw + c[0], Yw - c[1] ]
}

function punto(p) {

    var centro = cambia(p)
    var r = 25

    lienzo.beginPath()
    lienzo.arc(centro[0], centro[1], r-10, 0, 2 * Math.PI, false)
    lienzo.fillStyle = "green"
    lienzo.fill()
    lienzo.arc(centro[0], centro[1], r, 0, 2 * Math.PI, false)
    lienzo.stroke()

}

function λ(p3d, e) {
    return [e * p3d[0], e * p3d[1]]
}

function proj(p3d) {
    if (p3d[2] < 1)
        return [0, 0]
    return [p3d[0] / p3d[2], p3d[1] / p3d[2]]
}

function main() {
    lienzo = document.getElementById("cloth").getContext("2d")
    var s = 3
    punto(λ(proj([0, 0, 2]    ), s))
    punto(λ(proj([0, 100, 2]  ), s))
    punto(λ(proj([0, 100, 3]  ), s))
    punto(λ(proj([0, 0, 3]    ), s))
    punto(λ(proj([100, 0, 2]  ), s))
    punto(λ(proj([100, 100, 2]), s))
    punto(λ(proj([100, 100, 3]), s))
    punto(λ(proj([100, 0, 3]  ), s))
}
