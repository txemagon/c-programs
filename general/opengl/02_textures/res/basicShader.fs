#version 120

varying vec2 texCoord0;
uniform sampler2D diffuse;

void main()
{
    // gl_FragColor = texture2D(diffuse, vec2(0.2, 0.1));
    // gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
    gl_FragColor = texture2D( diffuse, texCoord0 );
}
