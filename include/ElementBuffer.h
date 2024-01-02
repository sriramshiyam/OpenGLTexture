#ifndef ELEMENT_BUFFER
#define ELEMENT_BUFFER

#include <GL/glew.h>

class ElementBuffer
{
public:
    unsigned int ID;
    ElementBuffer();
    ~ElementBuffer();
    void bind();
    void setBufferData(unsigned int *data, size_t size);
};

#endif