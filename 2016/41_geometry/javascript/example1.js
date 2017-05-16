var arr_square = [[0,0], [0,100], [100,100], [100,0]]
var str_square = [
     { x: 0,   y: 0  },
     { x: 0,   y: 100},
     { x: 100, y: 100},
     { x: 100, y: 0  }
]

function set_mark(ctx, point)
{
    var r = 6
    point = reformat(point)

    ctx.fillStyle = "blue"
    ctx.beginPath()
    ctx.arc(point[0], point[1], r, 0, 2*Math.PI)
    ctx.stroke()
    ctx.beginPath()
    ctx.arc(point[0], point[1], r-3, 0, 2*Math.PI)
    ctx.fill()

}

function raster(ctx, list) {
    for (n=0; n<list.length; n++)
        set_mark(ctx, list[n])
}

function example1() {
     var ctx = document.getElementById("example1").getContext("2d")
     raster(ctx, str_square)
}
