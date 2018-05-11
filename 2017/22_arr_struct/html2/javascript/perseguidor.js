var k = 1 
Perseguidor.prototype = new Movil
Perseguidor.prototype.constructor = Perseguidor

function Perseguidor(pos, vel, acc, target) {
    Movil.apply(this, arguments)
    this.target = target
    this.vmax = 10
    this.amax = 10
    this.appr = 10
}

function mod(v) {
	return Math.sqrt(v.x*v.x + v.y*v.y)
}

Perseguidor.prototype.choose = function(world, my_id){
	 var dir = {
	 	x: world[this.target].pos.x - this.pos.x,
	 	y: world[this.target].pos.y - this.pos.y
	 }
	 var modulo = mod(dir)
	 var amax = this.amax
	 if (modulo < this.appr)
	 	amax = modulo / this.appr * this.amax
	 dir.x = dir.x / modulo
	 dir.y = dir.y / modulo
     var vdes = {x: dir.x * this.vmax, 
                 y: dir.y * this.vmax}
     this.acc.x = vdes.x - this.vel.x
     this.acc.y = vdes.y - this.vel.y
     modulo = mod(this.acc)
     if (modulo > amax){
     	this.acc.x = this.acc.x * amax / modulo
     	this.acc.y = this.acc.y * amax / modulo
     }
    // this.acc.x = (world[this.target].pos.x - this.pos.x - this.vel.x)*k
    // this.acc.y = (world[this.target].pos.y - this.pos.y - this.vel.y)*k
    // this.acc.x = world[this.target].pos.x - this.pos.x
    // this.acc.y = world[this.target].pos.y - this.pos.y
}
