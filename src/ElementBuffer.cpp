#include "ElementBuffer.h"

ElementBuffer::ElementBuffer()
{
    glGenBuffers(1, &ID);
}

ElementBuffer::~ElementBuffer()
{
    glDeleteBuffers(1, &ID);
}

void ElementBuffer::bind()
{
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}

void ElementBuffer::setBufferData(unsigned int *data, size_t size)
{
    bind();
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
    // delete[] data;
}
