#version 100

precision mediump float;

varying vec2 fragTexCoord;
varying vec4 fragColor;

uniform sampler2D texture0;

// NOTE: Add here your custom variables

void main()
{
    vec4 base = texture2D(texture0, fragTexCoord)*fragColor;

    // Convert to grayscale using NTSC conversion weights
    float gray = dot(base.rgb, vec3(0.299, 0.587, 0.114));
    
    gl_FragColor = vec4(gray, gray, gray, base.a);
}