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


	glColor4f(1.0, 1.0, 1.0, 1);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glEnd();
	glDisable(GL_TEXTURE_2D);

	//roof
	/*Image* imr = loadBMP("res/gl.bmp");
	GLuint _txtIdr = Textures::loadTextures(imr);
	delete imr;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdr);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS); */
	


	glColor4f(0.3281, 0.7109, 0.9726, 0.6);
	glBegin(GL_QUADS);
	glDisable(GL_COLOR_MATERIAL);
	GLfloat param[4] = { 1, 1, 1, 1.0 };
	GLfloat materialColor[] = { 0.3281, 0.7109, 0.9726, 0.2 };

	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialColor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, param);
	glMaterialf(GL_FRONT, GL_SHININESS, 100);



	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);



	//walls

	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);


	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);



	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);



	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);



	param[0] = 0;
	param[1] = 0;
	param[2] = 0;
	param[3] = 0;
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, param);
	glEnable(GL_COLOR_MATERIAL);

	glEnd();


	/*
	//window
	Image* imgw = loadBMP("res/b.bmp");
	GLuint _txtIdgw = Textures::loadTextures(imgw);
	delete imgw;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdgw);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);

	//-5.0f, -3.0f, 2.0f, -5.0f, 22.0f, -23.0f

	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-4.999f, 7.0f, -6.4f);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-4.999f, 12.0f, -6.4f);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-4.999f, 12.0f, -14.6f);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-4.999f, 7.0f, -14.6f);
	glTexCoord2f(0.0, 1.0);

	glEnd();
	glDisable(GL_TEXTURE_2D);

	//door
	Image* imgd = loadBMP("res/b.bmp");
	GLuint _txtIdgd = Textures::loadTextures(imgd);
	delete imgd;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdgd);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);

	//-5.0f, -3.0f, 2.0f, -5.0f, 22.0f, -23.0f

	glNormal3f(0.0f, 1.0f, 0.0f);


	glVertex3f(19.999f, -3.0f, -7.0f);
	glTexCoord2d(0, 0);
	glVertex3f(19.999f, -3.0f, -14.0);
	glTexCoord2d(1, 0);
	glVertex3f(19.999f, 12.0f, -14.0);
	glTexCoord2d(1, 1);
	glVertex3f(19.999f, 12.0f, -7.0);
	glTexCoord2d(0, 1);

	glEnd();

	glDisable(GL_TEXTURE_2D);*/
}


wallsFloor::~wallsFloor()
{
}
