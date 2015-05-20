#include "wallsFloor.h"
#include <GL/glut.h>

wallsFloor::wallsFloor()
{
	glBegin(GL_QUADS);
	//floor
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);

	//walls
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);

	glVertex3f(20.0f, -3.0f, 2.0f);
	glVertex3f(20.0f, -3.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, 2.0f);

	glVertex3f(20.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);
	glVertex3f(20.0f, 22.0f, -23.0f);

	glVertex3f(-5.0f, -3.0f, -23.0f);
	glVertex3f(-5.0f, -3.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, 2.0f);
	glVertex3f(-5.0f, 22.0f, -23.0f);


	glEnd();
}


wallsFloor::~wallsFloor()
{
}
