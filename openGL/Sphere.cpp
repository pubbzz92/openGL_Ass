#include "Sphere.h"
#include <GL/glut.h>

Sphere::Sphere()
{
	glPushMatrix();
	glTranslatef(7.5f, 3.0f, -10.5f);
	glutSolidSphere(6.0, 50, 50);
	
	glPopMatrix();
	

}


Sphere::~Sphere()
{
}
