#ifndef MESH_H
#define MESH_H

#include <glm/glm.hpp>

class Vertex
{
    public:
        Vertex(glm::vec3& pos)
        {
            this->pos = pos;
        }
    protected:
    private:
    glm::vec3 pos;
};

class Mesh
{
    public:
        Mesh(Vertex* vertices, unsigned numVertices);
        virtual ~Mesh();

        void Draw();
    protected:
    private:
        Mesh(const Mesh& other);
        void operator=(const Mesh& other);

        enum {
            POSITION_VB,

            NUM_BUFFS
        };

        GLuint m_vertexArrayObject;
        GLuint m_vertexArrayBuffers[NUM_BUFFS];
        unsigned m_drawCount;
};

#endif // MESH_H
