#ifndef MESH_H
#define MESH_H

#include <string>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include "obj_loader.h"

class Vertex
{
    public:
        Vertex(const glm::vec3 &pos, const glm::vec2 &texCoord, const glm::vec3 &normal = glm::vec3(0,0,0))
        {
            this->pos = pos;
            this->texCoord = texCoord;
            this->normal = normal;
        }

        inline glm::vec3 *GetPos() { return &pos; }
        inline glm::vec2 *GetTexCoord() { return &texCoord; }
        inline glm::vec3 *GetNormal() { return &normal; }
    protected:
    private:
    glm::vec3 pos;
    glm::vec2 texCoord;
    glm::vec3 normal;
};

class Mesh
{
    public:
        Mesh(Vertex* vertices, unsigned numVertices, unsigned *indices, unsigned numIndices);
        Mesh(const std::string &fileName);
        virtual ~Mesh();

        void Draw();
    protected:
    private:
        Mesh(const Mesh& other);
        void operator=(const Mesh& other);

        void initMesh(const IndexedModel &model);

        enum {
            POSITION_VB,
            TEXCOORD_VB,
            NORMAL_VB,
            INDEX_VB,

            NUM_BUFFS
        };

        GLuint m_vertexArrayObject;
        GLuint m_vertexArrayBuffers[NUM_BUFFS];
        unsigned m_drawCount;
};

#endif // MESH_H
