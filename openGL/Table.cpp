#include "Table.h"
#include <GL/glut.h>

Table::Table()
{
	glBegin(GL_QUADS);


	//bottom pane
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-2.6f, 0.0f, 0.1f);
	glVertex3f(2.6f, 0.0f, 0.1f);
	glVertex3f(2.6f, 0.0f, -5.2f);
	glVertex3f(-2.6f, 0.0f, -5.2f);

	//top pane
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-2.6f, 0.2f, 0.1f);
	glVertex3f(2.6f, 0.2f, 0.1f);
	glVertex3f(2.6f, 0.2f, -5.2f);
	glVertex3f(-2.6f, 0.2f, -5.2f);

	//sides of top
	glNormal3f(0.0f, 0.0f, 0.1f);
	glVertex3f(-2.6f, 0.2f, 0.1f);	glVertex3f(-2.6f, 0.0f, 0.1f);	glVertex3f(2.6f, 0.0f, 0.1f);	glVertex3f(2.6f, 0.2f, 0.1f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(2.6f, 0.2f, 0.1f);	glVertex3f(2.6f, 0.0f, 0.1f);	glVertex3f(2.6f, 0.0f, -5.2f);	glVertex3f(2.6f, 0.2f, -5.2f);

	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.6f, 0.2f, -5.2f);	glVertex3f(2.6f, 0.0f, -5.2f);	glVertex3f(-2.6f, 0.0f, -5.2f);	glVertex3f(-2.6f, 0.2f, -5.2f);

	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.6f, 0.2f, -5.2f);	glVertex3f(-2.6f, 0.0f, -5.2f);	glVertex3f(-2.6f, 0.0f, 0.1f);	glVertex3f(-2.6f, 0.2f, 0.1f);


	//leg1
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, 0.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, 0.0f, -0.1f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.2f, 0.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, 0.0f, -0.3f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, 0.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, 0.0f, -0.3f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.4f, 0.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, -3.0f, -0.3f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, -3.0f, -0.1f);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, 0.0f, -0.1f);

	//leg2
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.2f, 0.0f, -0.1f);
	glVertex3f(2.2f, -3.0f, -0.1f);
	glVertex3f(2.4f, -3.0f, -0.1f);
	glVertex3f(2.4f, 0.0f, -0.1f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(2.4f, 0.0f, -0.1f);
	glVertex3f(2.4f, -3.0f, -0.1f);
	glVertex3f(2.4f, -3.0f, -0.3f);
	glVertex3f(2.4f, 0.0f, -0.3f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.4f, 0.0f, -0.3f);
	glVertex3f(2.4f, -3.0f, -0.3f);
	glVertex3f(2.2f, -3.0f, -0.3f);
	glVertex3f(2.2f, 0.0f, -0.3f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(2.2f, 0.0f, -0.3f);
	glVertex3f(2.2f, -3.0f, -0.3f);
	glVertex3f(2.2f, -3.0f, -0.1f);
	glVertex3f(2.2f, 0.0f, -0.1f);

	//leg3
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.2f, 0.0f, -4.7f);
	glVertex3f(2.2f, -3.0f, -4.7f);
	glVertex3f(2.4f, -3.0f, -4.7f);
	glVertex3f(2.4f, 0.0f, -4.7f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(2.4f, 0.0f, -4.7f);
	glVertex3f(2.4f, -3.0f, -4.7f);
	glVertex3f(2.4f, -3.0f, -4.9f);
	glVertex3f(2.4f, 0.0f, -4.9f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(2.4f, 0.0f, -4.9f);
	glVertex3f(2.4f, -3.0f, -4.9f);
	glVertex3f(2.2f, -3.0f, -4.9f);
	glVertex3f(2.2f, 0.0f, -4.9f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(2.2f, 0.0f, -4.9f);
	glVertex3f(2.2f, -3.0f, -4.9f);
	glVertex3f(2.2f, -3.0f, -4.7f);
	glVertex3f(2.2f, 0.0f, -4.7f);

	//leg4
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.4f, 0.0f, -4.7f);
	glVertex3f(-2.4f, -3.0f, -4.7f);
	glVertex3f(-2.2f, -3.0f, -4.7f);
	glVertex3f(-2.2f, 0.0f, -4.7f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.2f, 0.0f, -4.7f);
	glVertex3f(-2.2f, -3.0f, -4.7f);
	glVertex3f(-2.2f, -3.0f, -4.9f);
	glVertex3f(-2.2f, 0.0f, -4.9f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, 0.0f, -4.9f);
	glVertex3f(-2.2f, -3.0f, -4.9f);
	glVertex3f(-2.4f, -3.0f, -4.9f);
	glVertex3f(-2.4f, 0.0f, -4.9f);
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
