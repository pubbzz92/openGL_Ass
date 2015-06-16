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
	Image* imr = loadBMP("res/roof.bmp");
	GLuint _txtIdr = Textures::loadTextures(imr);
	delete imr;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdr);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

	glBegin(GL_QUADS); 
	
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glTexCoord2f(0.0f, 1.0f);


	glEnd();
	glDisable(GL_TEXTURE_2D);


	//walls
	Image* imw = loadBMP("res/wall.bmp");
	GLuint _txtIdw = Textures::loadTextures(imw);
	delete imw;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdw);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glBegin(GL_QUADS);



	//front

	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);

	


	///right door
	

	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);



	
	//back

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);





	//left window

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);

	glEnd();

	glDisable(GL_TEXTURE_2D);


	
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
	Image* imgdo = loadBMP("res/b.bmp");
	GLuint _txtIdgdo = Textures::loadTextures(imgdo);
	delete imgdo;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtIdgdo);

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

	glDisable(GL_TEXTURE_2D);

	
}


wallsFloor::~wallsFloor()
{
}
