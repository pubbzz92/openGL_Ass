#include "Vase.h"


Vase::Vase()
{

	GLUquadric *quad = gluNewQuadric();
	glTranslatef(0.0f, 2.1f, -2.6f);
	glRotatef(-90, 1.0f, 0.0f, 0.0f);
	gluCylinder(quad, 0.2f, 0.4f, 0.3f, 32, 32);
	glTranslatef(0.0f, 0.0f, -0.3f);
	gluCylinder(quad, 0.6f, 0.2f, 0.3f, 32, 32);
	glTranslatef(0.0f, 0.0f, -1.5f);
	gluCylinder(quad, 0.2f, 0.6f, 1.5f, 32, 32);
	gluDisk(quad, 0.0f, 0.3f, 32, 32);
	glEnd();
}


Vase::~Vase()
{
}
