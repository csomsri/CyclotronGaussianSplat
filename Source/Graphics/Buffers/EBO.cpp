#include "EBO.h"

EBO::EBO() {
	glGenBuffers(1, &ID);
}

void EBO::Bind() const {
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}	

void EBO::Unbind() const {
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}	

EBO::~EBO() {
	glDeleteBuffers(1, &ID);
}