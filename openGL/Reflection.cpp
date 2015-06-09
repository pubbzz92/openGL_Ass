#include "Reflection.h"
#include "bulb.h"


Reflection::Reflection() {
}


Reflection::~Reflection() {

	glEnable(GL_STENCIL_TEST);
	glColorMask(0, 0, 0, 0); 
	glDisable(GL_DEPTH_TEST); 
	glStencilFunc(GL_ALWAYS, 1, 1);
	glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
	Sphere::Sphere();

	glColorMask(1, 1, 1, 1);
	glEnable(GL_DEPTH_TEST); 
	glStencilFunc(GL_EQUAL, 1, 1);
	glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP); 

	
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslatef(7.5, 0, 0);
	wallsFloor::wallsFloor();
	Table::Table();
	bulb::bulb();
	Sphere::Sphere();
	glPopMatrix();

	/*
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslatef(7.5, 0, 0);
	wallsFloor::wallsFloor();
	Table::Table();
	bulb::bulb();
	//wallsFloor::wallsFloor();
	Sphere::Sphere();
	glPopMatrix();


	glPushMatrix();
	glScalef(1, 1, -1);
	glTranslatef(0, 0, -10.5);
	wallsFloor::wallsFloor();
	Table::Table();
	bulb::bulb();
	//wallsFloor::wallsFloor();
	Sphere::Sphere();
	glPopMatrix();


	glPushMatrix();
	glScalef(1, 1, -1);
	glTranslatef(0, 0, -10.5);
	wallsFloor::wallsFloor();
	Table::Table();
	bulb::bulb();
	//wallsFloor::wallsFloor();
	Sphere::Sphere();
	glPopMatrix();
	*/

	glDisable(GL_STENCIL_TEST);
}
