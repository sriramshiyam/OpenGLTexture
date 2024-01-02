#include "VertexBuffer.h"
#include <iostream>

VertexBuffer::VertexBuffer()
{
    glGenBuffers(1, &ID);
}

VertexBuffer::~VertexBuffer()
{
    glDeleteBuffers(1, &ID);
}

void VertexBuffer::bind()
{
    glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void VertexBuffer::setBufferData(float *data, size_t size)
{
    bind();
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

void VertexBuffer::setVertexAttributePointer(int index, int size, GLenum type, bool normalized, int stride, void *pointer)
{
    glVertexAttribPointer(index, size, type, normalized, stride, pointer);
    glEnableVertexAttribArray(index);
}
