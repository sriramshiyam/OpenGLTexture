#ifndef VERTEX_ARRAY
#define VERTEX_ARRAY

#include <GL/glew.h>

class VertexArray
{
public:
    unsigned int ID;
    VertexArray();
    ~VertexArray();
    void bind();
};

#endif