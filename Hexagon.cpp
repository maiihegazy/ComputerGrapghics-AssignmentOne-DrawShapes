#include<GL/glut.h>
void myinit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 740.0, 0.0, 580.0);
}

void Hexagon(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.4, 0.4);

	int p1[] = { 200, 100 };
	int p2[] = { 400, 100 };
	int p3[] = { 550, 300 };
	int p4[] = { 400, 480 };
	int p5[] = { 200, 480 };
	int p6[] = { 50, 300 };


	glBegin(GL_POLYGON);
	glVertex2iv(p1);
	glVertex2iv(p2);
	glVertex2iv(p3);
	glVertex2iv(p4);
	glVertex2iv(p5);
	glVertex2iv(p6);
	glEnd();

	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(740, 580);
	glutCreateWindow("Hexagon");
	myinit();
	glutDisplayFunc(Hexagon);
	glutMainLoop();
}

