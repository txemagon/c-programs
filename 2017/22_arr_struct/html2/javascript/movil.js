function Coord2D(x, y) {
    this.x = x
    this.y = y
}

function Movil(pos, vel, acc){
    this.pos = pos || {x:0, y:0}
    this.vel = vel || {x:0, y:0}
    this.acc = acc || {x:0, y:0}
}

Movil.prototype.choose = function(world, my_id) {
   /* Set desired acceleration */
 }

