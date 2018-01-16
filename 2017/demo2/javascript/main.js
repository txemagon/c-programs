var W = 640
var H = 400
var R = 100
var S = []


function init(fuente, dest) {
    var x, y, r, color
    dest.globalAlpha = 0.1

    function paint(x, y, r, red, green, blue) {
        dest.beginPath()
        dest.fillStyle = "rgb(" + red + ", " + green + ", " + blue + ")"
        dest.arc(x, y, r, 0, 2 * Math.PI)
        dest.closePath()
        dest.fill()
    }

    for (var y=0; y<H; y++){
        S[y] = []
        for (var x=0; x<W; x++){
            color = fuente.getImageData(x, y, 1, 1).data
            function a(x, y, r, red, green, blue){
                setTimeout(paint, 1, x, y, r, red, green, blue)
            }
            var cm = (color[0] + color[1] + color[2]) / 3
            S[y][x] +=
            a(x, y, r, color[1], color[2], color[0])
        }
    }
}


function main() {
    var papel = document.getElementById("papel").getContext("2d")
    var origen = document.createElement("canvas")
    origen.width = W
    origen.height = H
    origen = origen.getContext("2d")
    var archivo = new Image(W, H)
    archivo.src = "images/man_on_the_moon.jpg"
    archivo.onload = function() {
        origen.drawImage(archivo, 0, 0)
        init(origen, papel)
    }
}
