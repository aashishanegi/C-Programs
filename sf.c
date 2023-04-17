#include<GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int h, k, r;
void scanline(int, int);
void circle(void);
void Axes(void);
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	circle();
	glEnd();
	glFlush();
}
void scanline(int ax, int by)
{
	int varx;
	for (varx = h + ax; varx >= (h - ax); varx--)
		glVertex2s(varx, by);
}
void circle(void)
{
	double XEnd, J;
	int i, j;
	XEnd = (r / 1.414);
	for (i = 0; i <= XEnd; i++)
	{
		J = sqrt(r * r - i * i);
		j = (int)(J);
		scanline(i, j);
		scanline(j, i);
		scanline(j, -i);
		scanline(i, -j);
	}
	Axes();
	glVertex3s(h, k, -25);
}
void Axes(void)
{
	int i;
	glColor3f(1.0, 1.0, 1.0);
	for (i = -100; i <= 100; i++)
	{
		glVertex2s(i, 0);
		glVertex2s(0, i);
	}
	for (i = -2; i <= 2; i++)
	{
		glVertex2s(95 + i, 4 + i);
		glVertex2s(95 - i, 4 + i);
	}
	for (i = 0; i <= 2; i++)
	{
		glVertex2s(4 + i, 95 + i);
		glVertex2s(4 - i, 95 + i);
		glVertex2s(4, 95 - i);
	}
}
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	printf("Enter the center of circle:\n");
	scanf_s("%d %d", &h, &k);
	printf("Enter the radius:\n");
	scanf_s("%d", &r);
	glutCreateWindow("Circle : Scanline Filling Method ");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
