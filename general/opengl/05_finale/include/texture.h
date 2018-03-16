#ifndef __TEXTURE_H__
#define  __TEXTURE_H__

#include <string>
#include <GL/glew.h>

class Texture {
    public:
        Texture(const std::string fileName);

        void Bind(unsigned unit);


        virtual ~Texture();

    protected:
    private:
        Texture(const Texture &texture) {}
        void operator=(Texture &texture) {}

        GLuint m_texture;
};

#endif
