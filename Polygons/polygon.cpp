#include<Windows.h>
#include<gl/glut.h>
void display1() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glPointSize(50);
	glColor3d(1.0f, 0.0f, 0.0f);
	glVertex2d(0.5000f, 0.0f);
	glColor3d(1.0f, 1.0f, 0.0f);
	glVertex2d(0.3117f, 0.3909f);
	glColor3d(1.0f, 1.0f, 1.0f);
	glVertex2d(-0.1113f, 0.4875f);
	glColor3d(1.0f, 0.0f, 1.0f);
	glVertex2d(-0.4505f, 0.2169f);
	glColor3d(0.0f, 1.0f, 1.0f);
	glVertex2d(-0.4505f, -0.2169f);
	glColor3d(0.0f, 1.0f, 0.0f);
	glVertex2d(-0.1113f, -0.4875f);
	glColor3d(0.0f, 0.0f, 1.0f);
	glVertex2d(0.3117f, -0.3909f);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Polygon");
	glutInitWindowSize(620, 620);
	glutInitWindowPosition(150, 150);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
