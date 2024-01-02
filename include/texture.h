#ifndef TEXTURE
#define TEXTURE

#include <GL/glew.h>

class Texture
{
public:
    unsigned int ID;

    Texture(const char *textureSource,bool transparency);
    ~Texture();
    void bind();
    void setTextureWrapping(GLenum wrapS, GLenum wrapT);
    void setTextureBorderColor(float r, float g, float b, float a);
    void setTextureFiltering(GLenum minFilter, GLenum magFilter);
};

#endif