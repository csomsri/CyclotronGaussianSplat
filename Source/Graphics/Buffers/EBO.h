#ifndef EBO_H
#define EBO_H
#include <glad/glad.h>
#include <iostream>

class EBO {
	uint32_t ID;
	EBO();
	void Bind() const;
	void Unbind() const;
	~EBO();
};	

#endif // EBO_H