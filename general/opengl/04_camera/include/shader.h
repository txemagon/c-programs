/*
 * Shader.h
 *
 *  Created on: 05/03/2018
 *      Author: imasen
 */

#ifndef SRC_SHADER_H_
#define SRC_SHADER_H_

#include <string>
#include <GL/glew.h>

#include "transformation.h"
#include "camera.h"

class Shader {
public:
	Shader(const std::string& fileName);

	void Bind();
        void Update(const Transformation &transform, const Camera &camera);

	virtual ~Shader();

protected:
private:
	static const int NUM_SHADERS = 2;
	Shader(const Shader &other) {}
	void operator=(const Shader &other) {}

        enum {
            TRANSFORM_U,

            NUM_TRANSFORMS
        };

	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
        GLuint m_uniforms[NUM_TRANSFORMS];
};

#endif /* SRC_SHADER_H_ */
