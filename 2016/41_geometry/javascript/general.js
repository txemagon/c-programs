var cs = {
   origin: [500, 220],
   scale: [1, -1],
   rotation: [[1,0], [0,1]]
}

function set_rotation(angle) {
    angle = angle * Math.PI / 180
    cs.rotation[0][0] = Math.cos(angle)
    cs.rotation[0][1] = -Math.sin(angle)
    cs.rotation[1][0] = Math.sin(angle)
    cs.rotation[1][1] = Math.cos(angle)
}

function reformat(point){
    var final_point = []

    if ( point instanceof Array )
        return final_point = [point[0], point[1]]

    if (typeof (point.x) != "undefined" && typeof (point.y) != "undefined")
       return [point.x, point.y]

   throw "Invalid type"
}

function view2canvas(point) {
    if (point.canvas)
        return point

    var p = []

    p[0] = cs.rotation[0][0] * point[0] + cs.rotation[0][1] * point[1]
    p[1] = cs.rotation[1][0] * point[0] + cs.rotation[1][1] * point[1]

    p[0] = cs.origin[0] + cs.scale[0] * p[0]
    p[1] = cs.origin[1] + cs.scale[1] * p[1]
    p.canvas = 1
    return p
}

function set_mark(ctx, point)
{
    var r = 6

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
        set_mark(ctx, view2canvas(reformat(list[n])))
}

function trace(ctx, list, closed, marks) {
    var n_elements = list.length + (closed ? 1 : 0)
    for (n=1; n<n_elements; n++) {
        var origi = view2canvas(reformat(list[n-1]))
        var point = view2canvas(reformat(list[n % list.length]))
        if (marks) {
            set_mark(ctx, origi)
            set_mark(ctx, point)
        }
        ctx.beginPath()
        ctx.moveTo(origi[0], origi[1])
        ctx.lineTo(point[0], point[1])
        ctx.stroke()
    }
}

