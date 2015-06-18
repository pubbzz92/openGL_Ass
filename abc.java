#include "sun.h"
#include<GL/glut.h>

float ballX = -60.0f;
float ballY = -3.0f;
float ballZ = -10.5f;
float colR = 3.0;
float colG = 1.5;
float colB = 1.0;
float bgColR = 0.0;
float bgColG = 0.0;
float bgColB = 0.0;

static int flag = 1;

void update(int value) {

	if (ballX > 75.0f)  
	{
		ballX = -60.0f;
		ballY = -3.0f;
		flag = 1;
		colR = 2.0;
		colG = 1.50;
		colB = 1.0;

		bgColB = 0.0;
	}

	if (flag)
	{
		ballX += 0.0014f;
		ballY += 0.0007f;
		colR -= 0.001;
		colG+=0.002;
		colB += 0.005;

		bgColB += 0.001;

		if (ballX > 7.5)
		{
			flag = 0;

		}
	}
	if (!flag)
	{
		ballX += 0.0014f;
		ballY -= 0.0007f;
		colR += 0.001;
		colB -= 0.01;

		bgColB -= 0.001;

		if (ballX > 75.0)
		{
			flag = 1;

		}
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(1, update, 0);
}

sun::sun()
{
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glColor3f(colR, colG, colB); //set ball colour
	glTranslatef(ballX, ballY, ballZ); //moving it toward the screen a bit on creation
	glutSolidSphere(1.5, 30, 30); //create ball.

	glutTimerFunc(1, update, 0);
}


sun::~sun()
{
}
