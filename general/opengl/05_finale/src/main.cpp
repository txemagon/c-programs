#include <iostream>
#include <stdlib.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

#include "display.h"
#include "mesh.h"
#include "shader.h"
#include "texture.h"
#include "transformation.h"
#include "camera.h"

#define WIDTH  800
#define HEIGHT 600

int
main ( int argc, char *argv[] )
{
    Display display(WIDTH, HEIGHT, "<Your Title>");
    Vertex vertices[] = {   Vertex(glm::vec3(-0.5, -0.5, 0), glm::vec2(0.0, 0.0)),
                            Vertex(glm::vec3(-0  ,  0.5, 0), glm::vec2(0.5, 1.0)),
                            Vertex(glm::vec3( 0.5, -0.5, 0), glm::vec2(1.0, 0.0))
                        };

    unsigned indices[] = { 0, 1, 2 };
    Mesh mesh(vertices, sizeof(vertices) / sizeof (vertices[0]), indices, sizeof(indices) / sizeof(indices[0]) );
    Mesh mesh2("./res/monkey3.obj");
    Shader shader("./res/basicShader");
    Texture texture("./res/bricks.jpg");
    Camera camera(glm::vec3(0,0,-5), 70.0f, (float) WIDTH / HEIGHT, 0.01f, 100.0f);
    Transformation transform;

    float counter = 0.0f;
    float sincounter;
    float coscounter;

    while (!display.IsClosed())
    {
        display.clear(0.0f, 0.15f, 0.3f, 1.0f);

        sincounter = sinf(counter);
        coscounter = cosf(counter);
        transform.GetPos().x = 2 * sincounter;
        transform.GetPos().z = 2 * coscounter;
        transform.GetRot().x = 5 * counter;
        transform.GetRot().y = 4 * counter;
        transform.GetRot().z = 3 * counter;

        shader.Bind();
        texture.Bind(0);
        shader.Update(transform, camera);
        mesh2.Draw();
        display.Update();

        counter += 0.004f;
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
