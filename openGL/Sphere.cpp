#include "Sphere.h"
#include "imageloader.h"
#include "Textures.h"
#include <GL/glut.h>

Sphere::Sphere()
{
	Image* image = loadBMP("res/stl.bmp");
	GLuint _textureId = Textures::loadTextures(image);
	delete image;

	//glEnable(GL_TEXTURE_2D);
	//glBindTexture(GL_TEXTURE_2D, _textureId);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	GLUquadric *quad = gluNewQuadric();
	glPushMatrix();
	glTranslatef(7.5f, 2.4f, -10.5f);
	gluQuadricTexture(quad, true);
	//gluQuadricTexture(quad, 1);
	//gluQuadricNormals(quad, GLU_SMOOTH);
	gluSphere(quad, 5.4, 50, 50);
	
	glPopMatrix();
	glEnd();
	//glDisable(GL_TEXTURE_2D);

}

Sphere::~Sphere()
{
}
