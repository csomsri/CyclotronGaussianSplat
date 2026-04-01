#ifndef SHADER_H
#include <glad/glad.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <glm/glm.hpp>

class Shader
{

public:
	uint32_t ID; // Program ID

	Shader(const char* vertexPath, const char* fragmentPath);
	// ~Shader();
	
	void Use() const;
	void Unuse() const;
	
	// Uniforms Bools
	void setBool(std::string &name, bool value) const;

	// Uniforms Floats
	void setUniform1f(std::string &name, float value) const;
	void setUniform2f(std::string& name, glm::vec2 value) const;
	void setUniform3f(std::string& name, glm::vec3 value) const;

	// Uniforms Ints
	void setUniform1i(std::string &name, int value) const;
	void setUniform2i(std::string &name, glm::vec2 value) const;
	void setUniform3i(std::string &name, glm::vec3 value) const;

	// Matrix 4x4
	void setUniformMat4(std::string &name, glm::mat4x4) const;

	// Set Array Buffer
	void setArrayBuffer(std::string& name, int num_components, GLuint buffer, int stride, int count = 0) const;


private:
	void checkCompileErrors(unsigned int shader, std::string type);

};

#endif // SHADER_H
