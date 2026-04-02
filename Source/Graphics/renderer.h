#ifndef RENDERER_H
#define RENDERER_H

#include "Buffers/VAO.h"
#include "Buffers/VBO.h"
// #include "Buffers/EBO.h"
#include "../Utils/shader.h"

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


#include <iostream>

class Renderer {
public:
	Renderer(const char* vertexPath, const char* fragmentPath);
	~Renderer();

	
	void Render();
	void Initialize();
	void Shutdown();
	
private:
	Shader shader;

	VBO vbo;
	VAO vao;


	// Data
	int vertexCount;

};

#endif	// RENDERER_H