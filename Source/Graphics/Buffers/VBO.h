#ifndef VBO_H
#define VBO_H

#include <glad/glad.h>
#include <cstdint>
#include <iostream>

class VBO {
public:
	uint32_t ID;
	VBO();
	void Bind() const;
	void Unbind() const;
	void SetData(GLsizeiptr size, float* data) const;
	~VBO();

};

#endif VBO_H
