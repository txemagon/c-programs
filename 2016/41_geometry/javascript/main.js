var arr_square = [[0,0], [0,100], [100,100], [100,0]]
var str_square = [
     { x: 0, y: 0},
     { x: 0, y: 100},
     { x: 100, y: 100},
     { x: 100, y: 0}
]

function set_mark(ctx, point)
{
    var r = 6
    var point_x
    var point_y
    if ( point instanceof Array ){
     point_x = point[0]
     point_y = point[1]ctx.fillStyle = "blue"
   } else if (typeof (point.x) != "undefined" && typeof (point.y) != "undefined") {
       point_x = point.x
       point_y = point.y
   }
    else
        throw "Invalid type"

    ctx.beginPath()
    ctx.arc(point_x, point_y, r, 0, 2*Math.PI)
    ctx.stroke()
    ctx.beginPath()
    ctx.arc(point_x, point_y, r-3, 0, 2*Math.PI)
    ctx.fill()

}

function raster(ctx, list) {
    for (n=0; n<list.length; n++)
        set_mark(ctx, list[n])
}

function main() {
     var ctx = document.getElementById("example1").getContext("2d")
     raster(ctx, str_square)
}
