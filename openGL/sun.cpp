#include "sun.h"
#include <math.h>
#include<GL/glut.h>


#define PI 3.14159265

float ballX = -22.5f;     
float ballY = -3.0f;
float ballZ = -10.5f;
float colR = 3.0;
float colG = 1.5;
float colB = 1.0;
float bgColR = 0.0;
float bgColG = 0.0;
float bgColB = 0.0;
double angle = -90;
int radius = 30;
int flag = 1;

void update(int value) {

	if (ballX >= 37.495430f)
	{
		ballX = -22.5f;
		ballY = -3.0f;
		angle = -90;
		flag = 1;
		colR = 2.0;
		colG = 1.5;
		colB = 1.0;
		//bgColB = 0.0;
	}
	 
	if (flag)
	{


		ballX = sin(angle * PI /180)*radius;
		ballY = -3.0 + cos(angle * PI / 180)*radius;
		angle += 1;
		colR -= 0.001;
		colG+=0.002;
		colB += 0.005;

		//bgColB += 0.001;

		if (ballX >= 7.5)
		{
			flag = 0;
			angle = 0;
		}

		
	}
	if (!flag)
	{
		ballX = 7.5 + sin(angle * PI / 180)*radius;
		ballY = -3.0 + cos(angle * PI / 180)*radius;
		angle += 1;
		colR += 0.001;
		colB -= 0.01;
		//bgColB -= 0.001;

		if (ballX >= 37.495430)
		{
			flag = 1;
			angle = -90;

		}
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 5000 milliseconds
	glutTimerFunc(5000, update, 0);
}

sun::sun()
{
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glColor3f(colR, colG, colB);         //set ball colour
	glTranslatef(ballX, ballY, ballZ);   //moving it toward the screen a bit on creation
	glutSolidSphere(1.5, 30, 30);        //create ball.
	glutTimerFunc(5000, update, 0);
}


sun::~sun()
{
}
