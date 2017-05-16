
var modules = ['general']
var log

function main() {

    log = document.getElementById('log')
    var examples = document.querySelectorAll('canvas[id^=example]')
    for (var e=0; e<examples.length; e++)
        modules.push(examples[e].getAttribute('id'))

    for (var m=0; m<modules.length; m++) {
        var script = document.createElement('script')
        script.src = 'javascript/' + modules[m] + '.js'
        script.onload = (function() {
            var module = modules[m]
            return function() {
            try {
              eval( module + '()')
            } catch(e) {
                log.innerHTML += e.toString() + ' => General type module: ' + module + '<br/>\n'
            }
        }})()
        document.head.appendChild(script)
    }
}
