#include "Textures.h"
#include <GL/glut.h>
#include "imageloader.h"

Textures::Textures()
{
}


Textures::~Textures()
{
}


GLuint Textures :: loadTextures(Image* image){
		GLuint txtId;
		glGenTextures(1, &txtId);
		glBindTexture(GL_TEXTURE_2D, txtId);
		glTexImage2D(GL_TEXTURE_2D,
			0,
			GL_RGB,
			image->width, image->height,
			0,
			GL_RGB,
			GL_UNSIGNED_BYTE,
			image->pixels);
		return txtId;

}