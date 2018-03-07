    #include "Mesh.h"

Mesh::Mesh(Vertex* vertices, unsigned numVertices)
{
    m_drawCount = numVertices;

    glGenVertexArrays(1, &m_vertexArrayObject);                     // Allocate GPU space
    glBindVertexArray(m_vertexArrayObject);                         // Bind against RAM data

    glGenBuffers(NUM_BUFFS, m_vertexArrayBuffers);                 // Same for vertices
    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(vertices[0]), vertices, GL_STATIC_DRAW);  // Send data

    glEnableVertexAttribArray(0);                                   // Read attrib 0 of the stream of Vertex
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);       // From beginning read 3 floats without justifying. skip 0 values for next and don't use any getter.



    glBindVertexArray(0);
}

Mesh::~Mesh()
{
    glDeleteVertexArrays(1, &m_vertexArrayObject);
}

void Mesh::Draw()
{
    glBindVertexArray(m_vertexArrayObject);

    glDrawArrays(GL_TRIANGLES, 0, m_drawCount);

    glBindVertexArray(0);
}
