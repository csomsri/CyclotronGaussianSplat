#ifndef VBO_H
#include <glad/glad.h>
#include <cstdint>
#include <iostream>

class VBO {

	uint32_t ID;
	VBO();
	void Bind() const;
	void Unbind() const;
	void setData(uint32_t size, const void* data, uint32_t usage) const;



};

#endif VBO_H
