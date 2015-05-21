#include "Table.h"
#include <GL/glut.h>
#include "imageloader.h"
#include "Textures.h"

Table::Table()
{

	Image* im = loadBMP("res/table.bmp");
	GLuint _txtId = Textures::loadTextures(im);
	delete im;

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtId);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glBegin(GL_QUADS);


	//bottom pane
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0,0.0);
	glVertex3f(-2.6f, 0.0f, 0.1f);
	glTexCoord2f(1.0,0.0);
	glVertex3f(2.6f, 0.0f, 0.1f);
	glTexCoord2f(1.0,1.0);
	glVertex3f(2.6f, 0.0f, -5.2f);
	glTexCoord2f(0.0,1.0);
	glVertex3f(-2.6f, 0.0f, -5.2f);

	//top pane
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-2.6f, 0.2f, 0.1f);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(2.6f, 0.2f, 0.1f);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(2.6f, 0.2f, -5.2f);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-2.6f, 0.2f, -5.2f);

	//sides of top
	glNormal3f(0.0f, 0.0f, 0.1f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.6f, 0.2f, 0.1f);	
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.6f, 0.0f, 0.1f);	
	glTexCoord2f(1.0, 1.0); glVertex3f(2.6f, 0.0f, 0.1f);	
	glTexCoord2f(0.0, 1.0); glVertex3f(2.6f, 0.2f, 0.1f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.6f, 0.2f, 0.1f);	
	glTexCoord2f(1.0, 0.0); glVertex3f(2.6f, 0.0f, 0.1f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.6f, 0.0f, -5.2f);	
	glTexCoord2f(0.0, 1.0); glVertex3f(2.6f, 0.2f, -5.2f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.6f, 0.2f, -5.2f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.6f, 0.0f, -5.2f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.6f, 0.0f, -5.2f);	
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.6f, 0.2f, -5.2f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.6f, 0.2f, -5.2f);	
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.6f, 0.0f, -5.2f);	
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.6f, 0.0f, 0.1f);	
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.6f, 0.2f, 0.1f);


	//leg1
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.4f, 0.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.4f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.2f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.2f, 0.0f, -0.1f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.2f, 0.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.2f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.2f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.2f, 0.0f, -0.3f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.2f, 0.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.2f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.4f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.4f, 0.0f, -0.3f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.4f, 0.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.4f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.4f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.4f, 0.0f, -0.1f);

	//leg2
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.2f, 0.0f, -0.1f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.2f, -3.0f, -0.1f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.4f, -3.0f, -0.1f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.4f, 0.0f, -0.1f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.4f, 0.0f, -0.1f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.4f, -3.0f, -0.1f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.4f, -3.0f, -0.3f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.4f, 0.0f, -0.3f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.4f, 0.0f, -0.3f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.4f, -3.0f, -0.3f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.2f, -3.0f, -0.3f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.2f, 0.0f, -0.3f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.2f, 0.0f, -0.3f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.2f, -3.0f, -0.3f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.2f, -3.0f, -0.1f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.2f, 0.0f, -0.1f);

	//leg3
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.2f, 0.0f, -4.7f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.2f, -3.0f, -4.7f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.4f, -3.0f, -4.7f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.4f, 0.0f, -4.7f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.4f, 0.0f, -4.7f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.4f, -3.0f, -4.7f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.4f, -3.0f, -4.9f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.4f, 0.0f, -4.9f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.4f, 0.0f, -4.9f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.4f, -3.0f, -4.9f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.2f, -3.0f, -4.9f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.2f, 0.0f, -4.9f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(2.2f, 0.0f, -4.9f);
	glTexCoord2f(1.0, 0.0); glVertex3f(2.2f, -3.0f, -4.9f);
	glTexCoord2f(1.0, 1.0); glVertex3f(2.2f, -3.0f, -4.7f);
	glTexCoord2f(0.0, 1.0); glVertex3f(2.2f, 0.0f, -4.7f);

	//leg4
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.4f, 0.0f, -4.7f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.4f, -3.0f, -4.7f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.2f, -3.0f, -4.7f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.2f, 0.0f, -4.7f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.2f, 0.0f, -4.7f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.2f, -3.0f, -4.7f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.2f, -3.0f, -4.9f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.2f, 0.0f, -4.9f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0); glVertex3f(-2.2f, 0.0f, -4.9f);
	glTexCoord2f(1.0, 0.0); glVertex3f(-2.2f, -3.0f, -4.9f);
	glTexCoord2f(1.0, 1.0); glVertex3f(-2.4f, -3.0f, -4.9f);
	glTexCoord2f(0.0, 1.0); glVertex3f(-2.4f, 0.0f, -4.9f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.4f, 0.0f, -4.9f);
	glVertex3f(-2.4f, -3.0f, -4.9f);
	glVertex3f(-2.4f, -3.0f, -4.7f);
	glVertex3f(-2.4f, 0.0f, -4.7f);

	


	glEnd();
}


Table::~Table()
{
}
