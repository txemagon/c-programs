var dog = {
    head: [[0,10], [-15,10], [-7,17]],
    body: [[0,0], [20,0], [20,10], [0,10]],
    fleg: [[0,0], [0,-20], [3,0]],
    rleg: [[20,0], [20,-20], [17,0]],
    tail: [[20,10], [30,20]]
}

function example3(ctx) {
    set_rotation(30)
    for(var part in dog)
        trace(ctx, dog[part], true)
}

