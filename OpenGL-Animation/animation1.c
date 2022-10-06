
/************************************************************************************

	File: 			shapes.c

	Description:	A complete OpenGL program to display B and G and convert them to two stars.

	Author:			Bhavya Ghevariya

*************************************************************************************/


/* include the library header files */
#include <freeglut.h>

// declare two variables to store the values of X and Y coordinate changes
GLdouble changeCoordX = 0;
GLdouble changeCoordY = 0;
GLboolean buttonOn = 0;


/************************************************************************

	Function:		initializeGL

	Description:	Initializes the OpenGL rendering context for display.

*************************************************************************/
void initializeGL(void)
{
	// set background color to be black
	glClearColor(0, 0, 0, 1.0);

	// set window mode to 2D orthographic and set the drawing coordinates
	gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
}


/************************************************************************

	Function:		drawB

	Description:	Displays the shape B.

*************************************************************************/
void drawB(void)
{
	//1 draw the 1st polygon of B
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-1.4 - (0.1 * changeCoordX), 1.6 - (0.5 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.2 + (0.2 * changeCoordX), 1.6 - (0.5 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2 + (0.1 * changeCoordX), 1.4 - (0.6 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.4 - (0.1 * changeCoordX), 1.4 - (0.3 * changeCoordY));
	glEnd();

	//2 draw the 2nd polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2 + (0.4 * changeCoordX), 1.6 - (0.0 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6 - (0.2 * changeCoordX), 1.6 - (0.0 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6 - (0.0 * changeCoordX), 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.2 + (0.2 * changeCoordX), 1.4 - (0.3 * changeCoordY));
	glEnd();

	//3 draw the 3d polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6 - (0.0 * changeCoordY), 1.6 - (0.5 * changeCoordY));

	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-0.4 + (0.3 * changeCoordX), 1.6 - (0.5 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.4 - (0.1 * changeCoordX), 1.4 - (0.6 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 + (0.1 * changeCoordX), 1.4 - (0.6 * changeCoordY));
	glEnd();

	//4 draw the 4th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.4, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.2, 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(-1.4, 0.9 + (0.2 * changeCoordY));
	glEnd();

	//5 draw the 5th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.4, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.4, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6, 0.9 + (0.2 * changeCoordY));
	glEnd();

	//6 draw the 6th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(-1.4, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.2, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2, 0.7 + (0.4 * changeCoordY));

	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1.4, 0.7 + (0.4 * changeCoordY));
	glEnd();

	//7 draw the 7th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.2 + (0.2 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6 + (0.0 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 + (0.1 * changeCoordX), 0.7 + (0.1 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2 + (0.1 * changeCoordX), 0.7 + (0.1 * changeCoordY));
	glEnd();

	//8 draw the 8th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-0.6, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(-0.4, 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.4, 0.7 + (0.4 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6, 0.7 + (0.4 * changeCoordY));
	glEnd();

	//9 draw the 9th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1.4, 0.7 + (0.4 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2, 0.7 + (0.4 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2, 0.2 + (0.9 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.4, 0.2 + (0.9 * changeCoordY));
	glEnd();

	//10 draw the 10th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6, 0.7 + (0.4 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.4, 0.7 + (0.4 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.4, 0.2 + (0.9 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6, 0.2 + (0.9 * changeCoordY));
	glEnd();

	//11 draw the 11th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.4 + (0.3 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2 + (0.4 * changeCoordX), 0.2 + (0.4 * changeCoordY));

	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1.2 - (0.1 * changeCoordX), 0.0 + (0.3 * changeCoordY));

	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1.4 + (0.1 * changeCoordX), 0.0 + (0.3 * changeCoordY));
	glEnd();

	//12 draw the 12th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-1.2 + (0.1 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 + (0.1 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 - (0.2 * changeCoordX), 0.0 + (0.6 * changeCoordY));

	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-1.2 + (0.4 * changeCoordX), 0.0 + (0.6 * changeCoordY));
	glEnd();

	//13 draw the 13th polygon of B
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 - (0.2 * changeCoordX), 0.2 + (0.4 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.4 - (0.1 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(-0.4 + (0.1 * changeCoordX), 0.0 + (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6 + (0.3 * changeCoordX), 0.0 + (0.3 * changeCoordY));
	glEnd();
}


/************************************************************************

	Function:		drawG

	Description:	Displays the shape G.

*************************************************************************/
void drawG(void)
{
	//1 draw the 1st polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0 + (0.0 * changeCoordX), 1.4 - (0.3 * changeCoordY));
	glVertex2f(0.0 + (0.0 * changeCoordX), 1.6 - (0.5 * changeCoordY));

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(0.2 + (0.0 * changeCoordX), 1.6 - (0.5 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.2 + (0.0 * changeCoordX), 1.4 - (0.3 * changeCoordY));

	glEnd();

	//2 draw the 2nd polygon of G
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(0.2 + (0.5 * changeCoordX), 1.6);

	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(1.0 - (0.3 * changeCoordX), 1.6);

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(1.0 - (0.1 * changeCoordX), 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.2 + (0.3 * changeCoordX), 1.4 - (0.3 * changeCoordY));
	glEnd();

	//3 draw the 3rd polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.2, 1.4 - (0.3 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.2, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.9 + (0.2 * changeCoordY));
	glEnd();

	//4 draw the 4th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.9 + (0.2 * changeCoordY));

	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.2 + (0.3 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.2 + (0.2 * changeCoordX), 0.7 + (0.1 * changeCoordY));

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.7 + (0.4 * changeCoordY));
	glEnd();

	//5 draw the 5th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.7 + (0.4 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.2, 0.7 + (0.4 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.2, 0.2 + (0.9 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 0.2 + (0.9 * changeCoordY));
	glEnd();

	//6 draw the 6th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0 + (0.4 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.2 + (0.5 * changeCoordX), 0.2 + (0.4 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.2, 0.0 + (0.3 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.0 + (0.2 * changeCoordX), 0.0 + (0.3 * changeCoordY));
	glEnd();

	//7 draw the 7th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.2 + (0.2 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 + (0.2 * changeCoordX), 0.2 + (0.6 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 - (0.1 * changeCoordX), 0.0 + (0.6 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.2 + (0.5 * changeCoordX), 0.0 + (0.6 * changeCoordY));
	glEnd();

	//8 draw the 8th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 - (0.1 * changeCoordX), 0.2 + (0.4 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(1.0, 0.2 + (0.6 * changeCoordY));
	
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(1.0 + (0.2 * changeCoordX), 0.0 + (0.3 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 + (0.4 * changeCoordX), 0.0 + (0.3 * changeCoordY));
	glEnd();

	//9 draw the 9th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8, 0.7 + (0.4 * changeCoordY));

	glVertex2f(1.0, 0.7 + (0.4 * changeCoordY));

	glVertex2f(1.0, 0.2 + (0.9 * changeCoordY));

	glVertex2f(0.8, 0.2 + (0.9 * changeCoordY));
	glEnd();

	//10 draw the 10th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.8 + (0.1 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(1.0 + (0.4 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(1.0, 0.7 + (0.1 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 + (0.2 * changeCoordX), 0.7 + (0.1 * changeCoordY));
	glEnd();

	//11 draw the 11th polygon of G
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.5, 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.8 + (0.1 * changeCoordX), 0.9 + (0.2 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.8 + (0.2 * changeCoordX), 0.7 + (0.1 * changeCoordY));

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.5 - (0.1 * changeCoordX), 0.7 + (0.1 * changeCoordY));
	glEnd();
}


/************************************************************************

	Function:		myDisplay

	Description:	Displays the button

*************************************************************************/
void button(void)
{
	// set the color of the text
	glColor3f(0, 1 - changeCoordX, 1);
	
	// draw a square 
	glBegin(GL_POLYGON);
	glVertex2f(-0.4, -0.3);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.0, -0.2);
	glVertex2f(-0.4, -0.2);
	glEnd();

	// set the color of the text
	glColor3f(0 + changeCoordX, 0 + changeCoordX, 0 + changeCoordX);
	
	// set the position for the characters
	glRasterPos2f(-0.36, -0.28);

	// draw the characters
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'm');
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'o');
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'r');
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'p');
	glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'h');

}


/************************************************************************

	Function:		myDisplay

	Description:	Displays the drawing of B and G

*************************************************************************/
void myDisplay(void)
{
	// clear the screen 
	glClear(GL_COLOR_BUFFER_BIT);

	// draw the B shape
	drawB();

	// draw the G shape
	drawG();

	//draw the button
	button();

	// send all output to display 
	glutSwapBuffers();
}


/************************************************************************

	Function:		myMouseButton

	Description:	It converts the x and y coordinates to 0 or 1.

*************************************************************************/
void myMouseButton(GLint button, GLint state, GLint x, GLint y)
{
	//check which button is pressed and assign the corresponding value
	if ((button == GLUT_RIGHT_BUTTON) && state == GLUT_DOWN)
	{
		changeCoordX = 1;
		changeCoordY = 1;
	}

	if ((button == GLUT_LEFT_BUTTON) && state == GLUT_DOWN)
	{
		changeCoordX = 0;
		changeCoordY = 0;
	}

	// display the new display
	glutPostRedisplay();
}



/************************************************************************

	Function:		main

	Description:	Sets up the openGL rendering context and the windowing
					system, then begins the display loop.

*************************************************************************/
void main(int argc, char** argv)
{
	// initialize the toolkit
	glutInit(&argc, argv);
	// set display mode with double
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	// set window size
	glutInitWindowSize(500, 500);
	// set window position on screen
	glutInitWindowPosition(100, 150);
	// open the screen window
	glutCreateWindow("Assignment 01");
	// register redraw function
	glutDisplayFunc(myDisplay);
	// create a mouse click function - right & left
	glutMouseFunc(myMouseButton);
	//initialize the rendering context
	initializeGL();
	// go into a perpetual loop
	glutMainLoop();
}