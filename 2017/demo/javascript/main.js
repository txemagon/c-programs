var W = 640
var H = 400
var R = 100



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

    for (var i=0; i<600000; i++){
        x = Math.random() * W
        y = Math.random() * H
        r = Math.random() * ( R - 20 * (Math.log10(i)) )
        if (r<1) r= 1
        color = fuente.getImageData(x, y, 1, 1).data
        function a(x, y, r, red, green, blue){
            setTimeout(paint, 1, x, y, r, red, green, blue)
        }
        a(x, y, r, color[0], color[1], color[2])
    }
}

function main() {
    var papel = document.getElementById("papel").getContext("2d")
    var origen = document.createElement("canvas")
    origen.width = W
    origen.height = H
    origen = origen.getContext("2d")
    var archivo = new Image(W, H)
    var wait = true
    archivo.src = "images/man_on_the_moon.jpg"
    archivo.onload = function() {
        origen.drawImage(archivo, 0, 0)
        wait = false
        init(origen, papel)
    }
}
