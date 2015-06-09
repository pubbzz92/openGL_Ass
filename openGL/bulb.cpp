#include "bulb.h"
#include <GL/glut.h>


GLUquadricObj *qobj;


bulb::bulb() {
	glPushMatrix();
	glTranslatef(7.5f, -10.0f, -10.5f);     // position
	glPopMatrix();
	glPushMatrix();

	//bulb
	qobj = gluNewQuadric();
	gluQuadricDrawStyle(qobj, GLU_FILL);
	gluQuadricDrawStyle(qobj, GLU_FILL);
	gluQuadricNormals(qobj, GLU_SMOOTH);
	glScalef(2.5, 2.5, 2.5);
	glEnable(GL_NORMALIZE);
	gluSphere(qobj, 0.2, 20, 20);
	glPopMatrix();


	// draw arc 
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_FILL); 
	gluQuadricNormals(qobj, GLU_FLAT);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(qobj, 0.0125, 0.0125, 5.0, 16, 10);
	glPopMatrix();

	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_FILL); 
	gluQuadricNormals(qobj, GLU_FLAT);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(qobj, 0.125, 0.125, 1.0, 16, 10);
	glPopMatrix();

	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_FILL);
	gluQuadricNormals(qobj, GLU_FLAT);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(qobj, 0.25, 0.25, 0.75, 16, 10);
	glPopMatrix();

}


bulb::~bulb() {
}
