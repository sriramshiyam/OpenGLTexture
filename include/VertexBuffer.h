#ifndef VERTEX_BUFFER
#define VERTEX_BUFFER

#include <GL/glew.h>

class VertexBuffer
{
public:
    unsigned int ID;
    VertexBuffer();
    ~VertexBuffer();
    void bind();
    void setBufferData(float *data, size_t size);
    void setVertexAttributePointer(int index, int size, GLenum type, bool normalized, int stride, void *pointer);
};

#endif