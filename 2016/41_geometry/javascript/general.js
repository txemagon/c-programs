function reformat(point){
    var final_point = []

    if ( point instanceof Array )
        return final_point = point

    if (typeof (point.x) != "undefined" && typeof (point.y) != "undefined")
       return [point.x, point.y]

   throw "Invalid type"
}
