#include "renderer.h"

Renderer::Renderer(const char* vertexPath, const char* fragmentPath) : shader(vertexPath, fragmentPath), vertexCount(0) { Initialize(); }
	

void Renderer::Initialize() {
	

	// Upload Data (Do point cloud in a bit)
	float vertices[] = {
		 0.0f,  0.5f,
		-0.5f, -0.5f,
		 0.5f, -0.5f
	};

	vertexCount = 3;

	// Upload to GPU
	vbo.Bind();
	vao.Bind();
	vbo.SetData(sizeof(vertices), vertices);
	// Position Attribute
	vao.setAttribute(0, 2, GL_FLOAT, 2 * sizeof(float), 0);
}

void Renderer::Render() {
	// Clear Color
	glClear(GL_COLOR_BUFFER_BIT);
	
	shader.Use();

	vao.Bind();
	
	glDrawArrays(GL_TRIANGLES, 0, vertexCount);
}

void Renderer::Shutdown() {
	vbo.Unbind();
	vao.Unbind();
}

Renderer::~Renderer() {
	Shutdown();
}	