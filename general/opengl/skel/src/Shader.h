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

class Shader {
public:
	Shader(const std::string& fileName);

	void Bind();

	virtual ~Shader();

protected:
private:
	static const int NUM_SHADERS = 2;
	Shader(const Shader &other) {}
	void operator=(const Shader &other) {}

	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
};

#endif /* SRC_SHADER_H_ */
