#include<GL/glut.h>
void myinit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 740.0, 0.0, 580.0);
}

void Decagon(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.4, 0.4);

	int p1[] = { 200, 100 };
	int p2[] = { 400, 100 };
	int p3[] = { 550, 200 };
	int p4[] = { 600, 325 };
	int p5[] = { 550, 450 };
	int p6[] = { 400, 550 };
	int p7[] = { 200, 550 };
	int p8[] = { 50, 450 };
	int p9[] = { 0, 325 };
	int p10[] = { 50, 200 };


	glBegin(GL_POLYGON);
	glVertex2iv(p1);
	glVertex2iv(p2);
	glVertex2iv(p3);
	glVertex2iv(p4);
	glVertex2iv(p5);
	glVertex2iv(p6);
	glVertex2iv(p7);
	glVertex2iv(p8);
	glVertex2iv(p9);
	glVertex2iv(p10);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(740, 580);
	glutCreateWindow("Decagon");
	myinit();
	glutDisplayFunc(Decagon);
	glutMainLoop();
}

