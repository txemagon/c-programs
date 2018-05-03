var DELTA_T = 0.01

function sleep(ms){
    return new Promise(resolve => setTimeout(resolve, ms))
}

function update(list) {

    for (var i=0; i<list.length; i++){
        //list[i].choose(list, i)
        list[i].vel.x += list[i].acc.x * DELTA_T
        list[i].vel.y += list[i].acc.y * DELTA_T
        list[i].pos.x += list[i].vel.x * DELTA_T
        list[i].pos.y += list[i].vel.y * DELTA_T
    }

}

async function main() {
    var obj = []
    obj.push( new Movil({x:0, y:0}, {x:2, y:1}, {x:0, y: 0}) )
    obj.push( new Movil({x:-5, y:-3}, {x:2, y:-3}, {x:0, y: 0}) )
    init_graph()

    while(1) {
        update(obj)
        pintar(obj)
        await sleep(DELTA_T * 1000)
    }
}
