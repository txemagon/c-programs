#include "mesh.h"
#include "obj_loader.h"
#include <vector>

Mesh::Mesh(const std::string &fileName)
{
    IndexedModel model = OBJModel(fileName).ToIndexedModel();
    initMesh(model);
}

Mesh::Mesh(Vertex* vertices, unsigned numVertices, unsigned *indices, unsigned numIndices)
{
    IndexedModel model;

    for (unsigned i=0; i<numVertices; i++)
    {
        model.positions.push_back(*vertices[i].GetPos());
        model.texCoords.push_back(*vertices[i].GetTexCoord());
        model.normals.push_back(*vertices[i].GetNormal());
    }

    for (unsigned i=0; i<numIndices; i++)
        model.indices.push_back(indices[i]);
    initMesh(model);
}

Mesh::~Mesh()
{
    glDeleteVertexArrays(1, &m_vertexArrayObject);
}

void Mesh::initMesh(const IndexedModel &model)
{

    m_drawCount = model.indices.size();

    glGenVertexArrays(1, &m_vertexArrayObject);                     // Allocate GPU space
    glBindVertexArray(m_vertexArrayObject);                         // Bind against RAM data


    glGenBuffers(NUM_BUFFS, m_vertexArrayBuffers);                 // Same for vertices

    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.positions[0]), &model.positions[0], GL_STATIC_DRAW);  // Send data
    glEnableVertexAttribArray(0);                                   // Read attrib 0 of the stream of Vertex
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);       // From beginning read 3 floats without justifying. skip 0 values for next and don't use any getter.



    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[TEXCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.texCoords[0]), &model.texCoords[0], GL_STATIC_DRAW);  // Send data

    glEnableVertexAttribArray(1);                                   // Read attrib 0 of the stream of Vertex
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, NULL);       // From beginning read 3 floats without justifying. skip 0 values for next and don't use any getter.

    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[NORMAL_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.normals.size() * sizeof(model.normals[0]), &model.normals[0], GL_STATIC_DRAW);  // Send data
    glEnableVertexAttribArray(2);                                   // Read attrib 0 of the stream of Vertex
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 0, NULL);       // From beginning read 3 floats without justifying. skip 0 values for next and don't use any getter.



    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_vertexArrayBuffers[INDEX_VB]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, model.indices.size() * sizeof(model.indices[0]), &model.indices[0], GL_STATIC_DRAW);  // Send data


    glBindVertexArray(0);

}

void Mesh::Draw()
{
    glBindVertexArray(m_vertexArrayObject);

    glDrawElements(GL_TRIANGLES, m_drawCount, GL_UNSIGNED_INT, 0);
    //glDrawArrays(GL_TRIANGLES, 0, m_drawCount);

    glBindVertexArray(0);
}
