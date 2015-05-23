#include "wallsFloor.h"
#include <GL/glut.h>
#include "imageloader.h"
#include "Textures.h"

wallsFloor::wallsFloor()
{

	Image* im = loadBMP("res/floor.bmp");
	GLuint _txtId = Textures::loadTextures(im);
	delete im;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glBegin(GL_QUADS);
	//floor

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2d(0, 0);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2d(1, 0);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2d(1, 1);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2d(0, 1);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glEnd();

	//roof

	Image* imr = loadBMP("res/gl.bmp");
	GLuint _txtIdr = Textures::loadTextures(imr);
	delete imr;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdr);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS); 
	

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2d(0, 0);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glTexCoord2d(1, 0);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glTexCoord2d(1, 1);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glTexCoord2d(0, 1);
	glVertex3f(-5.0f, 22.0f, -23.0f);


	glEnd();



	//walls

	Image* img = loadBMP("res/gl.bmp");
	GLuint _txtIdg = Textures::loadTextures(img);
	delete img;


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdg);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);

	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2d(0, 0);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2d(1, 0);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glTexCoord2d(1, 1);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glTexCoord2d(0, 1);


	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2d(0, 0);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2d(1, 0);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glTexCoord2d(1, 1);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glTexCoord2d(0, 1);

	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2d(0, 0);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glTexCoord2d(1, 0);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glTexCoord2d(1, 1);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glTexCoord2d(0, 1);

	glVertex3f(-5.0f, -3.0f, -23.0f);
	glTexCoord2d(0, 0);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2d(1, 0);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glTexCoord2d(1, 1);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glTexCoord2d(0, 1);


	glEnd();
}


wallsFloor::~wallsFloor()
{
}
