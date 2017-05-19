var cube3d = [
    [1.8469976246233584, 0.5, 6.179854206646433],
    [1.8469976246233584, 0.5, 5.179854206646433],
    [1.8469976246233584, -0.5, 6.179854206646433],
    [1.8469976246233584, -0.5, 5.179854206646433],
    [0.8469976246233584, 0.5, 5.179854206646433],
    [0.8469976246233584, 0.5, 6.179854206646433],
    [0.8469976246233584, -0.5, 5.179854206646433],
    [0.8469976246233584, -0.5, 6.179854206646433],
    [0.8469976246233584, 0.5, 5.179854206646433],
    [1.8469976246233584, 0.5, 5.179854206646433],
    [0.8469976246233584, 0.5, 6.179854206646433],
    [1.8469976246233584, 0.5, 6.179854206646433],
    [0.8469976246233584, -0.5, 6.179854206646433],
    [1.8469976246233584, -0.5, 6.179854206646433],
    [0.8469976246233584, -0.5, 5.179854206646433],
    [1.8469976246233584, -0.5, 5.179854206646433],
    [0.8469976246233584, 0.5, 6.179854206646433],
    [1.8469976246233584, 0.5, 6.179854206646433],
    [0.8469976246233584, -0.5, 6.179854206646433],
    [1.8469976246233584, -0.5, 6.179854206646433],
    [1.8469976246233584, 0.5, 5.179854206646433],
    [0.8469976246233584, 0.5, 5.179854206646433],
    [1.8469976246233584, -0.5, 5.179854206646433],
    [0.8469976246233584, -0.5, 5.179854206646433]
  ]

var projected = []

var view_cs = {
scale: 400,
displ: [0, 0, 0],
rotation :[
   [1, 0, 0],
   [0, 1, 0],
   [0, 0, 1]
]
}

var DISPZ = .1
var DISP = .1

var KEY = {
    left: 37,
    right: 39,
    up: 38,
    down: 40,
    forw: 81,
    back: 65
}

function key_in(c, list){
   list = list || KEY
   for (var i in list)
       if (list[i] == c)
           return true
   return false
}

function displace(key) {
    if (key == KEY.forw)
        view_cs.displ[2]+= DISPZ

    if (key == KEY.back)
        view_cs.displ[2]-= DISPZ

    if (key == KEY.up)
        view_cs.displ[1]+= DISP

    if (key == KEY.down)
        view_cs.displ[1]-= DISP

    if (key == KEY.left)
        view_cs.displ[0]+= DISP

    if (key == KEY.right)
        view_cs.displ[0]-= DISP
}


function rotate(key) {

}

function scale(key){
   if (key == KEY.forw)
       view_cs.scale *= 1.1
   if (key == KEY.forw)
       view_cs.scale *= .9
}

function change_view(e) {
   var key = e.which || e.keyCode
   var func = displace

   if (!key_in(key))
       return true

   if (e.shitKey)
       func = scale

   if (e.ctrlKey)
       func = rotate

  func(key)

  example4();

  e.preventDefault()
  e.stopPropagation()
  return false
}

function project(point){
    var pd = [point[0]-view_cs.displ[0],
              point[1]-view_cs.displ[1],
              point[2]-view_cs.displ[2]]

    var p = [0, 0, 0]
    for (var i=0; i<3; i++)
            for (var m=0; m<3; m++)
                p[i] += view_cs.rotation[i][m] * pd[m]

     return [view_cs.scale * p[0] / p[2],
             view_cs.scale * p[1] / p[2]]
}

var example4_ctx
function example4(ctx){
    if (ctx)
        example4_ctx = ctx
    ctx = example4_ctx
    ctx.clearRect(0, 0, 1000, 450)
    var projected = []
    for(var p=0; p<cube3d.length; p++)
        projected.push(project(cube3d[p]))
    raster(ctx, projected)
}

