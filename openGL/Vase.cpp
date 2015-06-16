#include "Vase.h"
#include "imageloader.h"
#include "Textures.h"
#include <GL/glut.h>

Vase::Vase()
{
	Image* image = loadBMP("res/ceramic.bmp");
	GLuint _textureId = Textures::loadTextures(image);
	delete image;
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	GLUquadric *quad = gluNewQuadric();
	gluQuadricTexture(quad, 1);
	glTranslatef(0.0f, 2.1f, -2.6f);
	glRotatef(-90, 1.0f, 0.0f, 0.0f);
	gluCylinder(quad, 0.2f, 0.4f, 0.3f, 32, 32);
	glTranslatef(0.0f, 0.0f, -0.3f);
	gluCylinder(quad, 0.6f, 0.2f, 0.3f, 32, 32);
	glTranslatef(0.0f, 0.0f, -1.5f);
	gluCylinder(quad, 0.2f, 0.6f, 1.5f, 32, 32);
	gluDisk(quad, 0.0f, 0.3f, 32, 32);
	glEnd();
	glDisable(GL_TEXTURE_2D);
	//glRotatef(0, 1.0f, 0.0f, 0.0f);
}


Vase::~Vase()
{
}
