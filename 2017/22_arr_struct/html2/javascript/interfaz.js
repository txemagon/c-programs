var ctx
var logger

var WIDTH = 824
var HEIGHT = 400
var XC = WIDTH / 2
var YC = HEIGHT / 2

var R = 14
var PPM =  20 /*pixels por metro*/



function add_graph(obj){
    ctx.beginPath()
    ctx.arc(XC + obj.pos.x * PPM, YC - obj.pos.y * PPM, R, 0, 2 * Math.PI)
    ctx.fill()
    ctx.beginPath()
    ctx.arc(XC + obj.pos.x * PPM, YC - obj.pos.y * PPM, R + 5, 0, 2 * Math.PI)
    ctx.stroke()
    ctx.beginPath()
    ctx.strokeStyle = "red"
    ctx.moveTo(XC + obj.pos.x * PPM, YC - obj.pos.y * PPM)
    ctx.lineTo(XC + (obj.pos.x + obj.vel.x) * PPM, YC - (obj.pos.y + obj.vel.y) * PPM)
    ctx.stroke()
    ctx.beginPath()
    ctx.strokeStyle = "blue"
    ctx.moveTo(XC + obj.pos.x * PPM, YC - obj.pos.y * PPM)
    ctx.lineTo(XC + (obj.pos.x + obj.acc.x) * PPM, YC - (obj.pos.y + obj.acc.y) * PPM)
    ctx.stroke()
}

function pintar(list) {
    ctx.clearRect(0, 0, WIDTH, HEIGHT);
    for (var i=0; i<list.length; i++)
        add_graph(list[i])
}


function log(mssg) {
    logger.innerHTML += mssg + "<br/>\n"
}
function init_graph(){

    ctx = document.getElementById("world").getContext("2d")
    ctx.fillStyle = "blue"
    logger = document.getElementById("logger")
}


