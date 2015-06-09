#include <iostream>
#include <stdlib.h> //Needed for "exit" function
#include "Table.h"
#include "bulb.h"
#include "Reflection.h"
#include "wallsFloor.h"
//Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>

#else
#include <GL/glut.h>
#endif

#include "Sphere.h"
#include "imageloader.h"
#include "resource.h"

using namespace std;

//Called when a key is pressed

int xx = 0;
int yy = 1;
int zz = 2;
float camX[] = { 20.0f, -2.0f, -23.0f,     20.0f, 22.0f, -5.0f,    0.0f, 100.0f, -2.5f,     4.0f, 4.0f,  2.0f,   -5.0f, 22.0f,   2.0f,     20.0f, 22.0f, -23.0f,     20.0f,-3.0f,   2.0f ,       20.0f,-3.0f, -23.0f,       50.0f, 12.0f, -6.4f,       -5.0f, 5.0f, -6.4f ,	 20.0f, -3.0f,   2.0f ,	     20.0f,  21.9f,   2.0f};
float c[]    = { -5.0f, -3.0f,   2.0f,      0.0f,  4.9f,  0.0f,    0.0f,   0.0f, -3.0f,     0.0f, 0.0f, -2.0f,   20.0f, -3.0f, -23.0f,     -5.0f, -3.0f,   2.0f,     -5.0f,-3.0f, -23.0f ,       -5.0f,-3.0f,   2.0f,       -5.0f,  8.0f, -6.4f,        0.0f, 5.0f, -6.4f ,   7.5f, 20.0f, -10.5f ,	     -5.0f,  21.0f,   -23.0f};
float pos[]  = {  0.0f,  1.0f,   0.0f,      0.0f,  1.0f,  0.0f,    0.0f,   0.0f,  1.0f,     0.0f, 1.0f,  0.0f,    0.0f,  1.0f,   0.0f,      0.0f,  1.0f,   0.0f,      0.0f, 1.0f,   0.0f ,        0.0f, 1.0f,   0.0f,        0.0f,  1.0f,  0.0f,        0.0f, 1.0f,  0.0f ,   0.0f,  1.0f,   0.0f ,	      0.0f,   1.0f,   0.0f};



void handleKeypress(unsigned char key, int x, int y) {    //The current mouse coordinates
	
	if (key == 120){ // key 'a'
		xx = (xx + 3) % 36;
		yy = (yy + 3) % 36;
		zz = (zz + 3) % 36;

		glutPostRedisplay();

	}else if(key==27){
		exit(0);
	

	}
	
	}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	//glEnable(GL_LIGHT1);
	//glEnable(GL_LIGHT3);
	//glEnable(GL_LIGHT4);
	glEnable(GL_NORMALIZE);
	//glShadeModel(GL_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	//glEnable(GL_TEXTURE_2D);



	 
}

//Called when the window is resized
void handleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective

	//Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0f,                  //The camera angle
		(double)w / (double)h, //The width-to-height ratio
		1.0,                   //The near z clipping coordinate
		200.0);                //The far z clipping coordinate


}





//Draws the 3D scene
void drawScene() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	gluPerspective(70.0f, 800.0f / 600.0f, 1.0f, 10000.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(camX[xx], camX[yy], camX[zz], c[xx], c[yy], c[zz], pos[xx], pos[yy], pos[zz]);
	//ambient
	/*GLfloat light_ambient[] = { 0.2, 0.0, 0.0, 1.0 };
	GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_position[] = { 1.0, 50.0, -7.0, 1.0 };

	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);*/
	
	GLfloat ambientcol[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientcol);

	/*
	//table light
	GLfloat lightcolor[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat lightpos[] = { -5.0f, -3.0f, -4.0f, 1.0f };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightcolor);
	glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

	GLfloat lightcolor1[] = { 1.0f, 0.2f, 1.0f, 1.0f };
	GLfloat lightpos1[] = { -1.0f, 0.5f, 0.5f, 1.0f };
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightcolor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightpos1);

	//wall lights.0
	GLfloat lightcolor2[] = { 1.0f, 1.0f, 1.0f, 0.0f };
	GLfloat lightpos2[] = { 20.0f, -3.0f, -4.0f, 1.0f };
	glLightfv(GL_LIGHT3, GL_DIFFUSE, lightcolor2);
	glLightfv(GL_LIGHT3, GL_POSITION, lightpos2);

	GLfloat lightcolor3[] = { 1.0f, 0.2f, 0.2f, 1.0f };
	GLfloat lightpos3[] = { -1.0f, 0.5f, 0.5f, 1.0f };
	glLightfv(GL_LIGHT4, GL_DIFFUSE, lightcolor3);
	glLightfv(GL_LIGHT4, GL_POSITION, lightpos3);
	*/
	/*glEnable(GL_PROXY_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _txtId);

	glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);*/
	


	Table::Table();
	wallsFloor::wallsFloor();
	bulb::bulb();
	Reflection::Reflection();
	Sphere::Sphere();
	glutSwapBuffers(); 

}


int main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_STENCIL);
	glutInitWindowSize(400, 400); 


	glutCreateWindow("Scene 02");
	initRendering(); 


	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	
	glutMainLoop(); 
	return 0; 
}










