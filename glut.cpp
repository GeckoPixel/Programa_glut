#include "stdafx.h"
#include <stdio.h>
#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(1.0, 0.0);
	glVertex2f(2.0, 0.0);
	glVertex2f(3.0, 3.0);
	glVertex2f(5.0, 0.0);
	glVertex2f(4.0, -1.0);
	glVertex2f(3.0, -0.5);
	glVertex2f(1.0, -2.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-5.0, 0.0);
	glVertex2f(-3.5, 2.0);
	glVertex2f(-3.5, 2.0);
	glVertex2f(0.0, -1.0);
	glVertex2f(0.0, -1.0);
	glVertex2f(-1.5, -0.5);
	glVertex2f(-1.5, -0.5);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-5.0, -2.0);
	glVertex2f(-5.0, -2.0);
	glVertex2f(-6.0, 0.5);
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowPosition(100, 100);
	glutInitWindowSize(300, 300);
	glutCreateWindow("Cuadrado");

	glClearColor(0.0, 0.0, 0.0, 0.0);         // black background
	glMatrixMode(GL_PROJECTION);              // setup viewing projection
	glLoadIdentity();                           // start with identity matrix
	glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world

	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}