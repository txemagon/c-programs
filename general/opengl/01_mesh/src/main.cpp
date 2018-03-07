#include <iostream>
#include <stdlib.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

#include "display.h"
#include "Mesh.h"
#include "Shader.h"

int
main ( int argc, char *argv[] )
{
    Display display(800, 600, "<Your Title>");
    Vertex vertices[] = {   Vertex(glm::vec3(-0.5, -0.5, 0)),
                            Vertex(glm::vec3(-0  ,  0.5, 0)),
                            Vertex(glm::vec3( 0.5, -0.5, 0))
                        };

    Mesh mesh(vertices, sizeof(vertices) / sizeof (vertices[0]) );

    Shader shader("./res/basicShader");

    while (!display.IsClosed())
    {
        display.clear(0.0f, 0.15f, 0.3f, 1.0f);
        shader.Bind();
        mesh.Draw();
        display.Update();
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
