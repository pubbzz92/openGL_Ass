/* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above notice and this permission notice shall be included in all copies
* or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
/* File for "Basic Shapes" lesson of the OpenGL tutorial on
* www.videotutorialsrock.com
*/



#include <iostream>
#include <stdlib.h> //Needed for "exit" function

//Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

//Called when a key is pressed



void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y) {    //The current mouse coordinates
	switch (key) {

	case 27: //Escape key

		exit(0); //Exit the program


	}
}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
	 

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

	gluLookAt(-10.0f, 1.5f, 6.0f, -2.6f, 0.2f, 0.1f, 0.0f, 1.0f, 0.0f);
	//gluLookAt(camX[x], camY[y], cam[z], c[x], c[y], c[z], 0.0, 1.0, 0.0);

}





//Draws the 3D scene
void drawScene() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective

	//ambient
	GLfloat ambientcol[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientcol);


	GLfloat lightcolor[] = { 0.5f, 0.5f, 0.5f, 1.0f };
	GLfloat lightpos[] = { -5.0f, -1.5f, 4.0f, 1.0f };
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightcolor);
	glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

	GLfloat lightcolor1[] = { 0.5f, 0.2f, 0.2f, 1.0f };
	GLfloat lightpos1[] = { -1.0f, 0.5f, 0.5f, 0.0f };
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightcolor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightpos1);



	
	glBegin(GL_QUADS); 


	//bottom pane
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-2.6f,0.0f,0.1f);
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
	glVertex3f(-2.4f, -3.0f, -0.1f);
	glVertex3f(-2.2f, -3.0f, -0.1f);
	glVertex3f(-2.2f, 0.0f, -0.1f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.2f, 0.0f, -0.1f);
	glVertex3f(-2.2f, -3.0f, -0.1f);
	glVertex3f(-2.2f, -3.0f, -0.3f);
	glVertex3f(-2.2f, 0.0f, -0.3f);
	//
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.2f, 0.0f, -0.3f);
	glVertex3f(-2.2f, -3.0f, -0.3f);
	glVertex3f(-2.4f, -3.0f, -0.3f);
	glVertex3f(-2.4f, 0.0f, -0.3f);
	//
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.4f, 0.0f, -0.3f);
	glVertex3f(-2.4f, -3.0f, -0.3f);
	glVertex3f(-2.4f, -3.0f, -0.1f);
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
	glutSwapBuffers(); //Send the 3D scene to the screen
}


int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Set the window size

	//Create the window
	glutCreateWindow("Scene 02");
	initRendering(); //Initialize rendering

	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);


	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}









