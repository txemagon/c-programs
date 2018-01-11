function main() {
    var papel = document.getElementById("papel").getContext("2d")
    var origen = document.createElement("canvas")
    var archivo = new Image()
    archivo.src = "images/man_on_the_moon.jpg"
    archivo.onload = function() {
        origen.getContext("2d").drawImage(archivo, 0, 0)
        document.getElementById("page").appendChild(origen)
    }
}
