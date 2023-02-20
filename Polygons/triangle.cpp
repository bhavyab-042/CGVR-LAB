#include<Windows.h>
#include<gl/glut.h>

void display1()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glPointSize(50);
	glColor3d(1.0f, 0.0f, 0.0f);
	glVertex2d(0.0f, 0.5f);
	glColor3d(0.0f, 1.0f, 0.0f);
	glVertex2d(-0.5f, 0.0f);
	glColor3d(0.0f, 0.0f, 1.0f);
	glVertex2d(0.5f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3d(1.0f, 1.0f, 1.0f);
	glVertex2d(0.0f, 0.5f);
	glVertex2d(-0.5f, 0.0f);
	glVertex2d(0.5f, 0.0f);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Drawing Triangle");
	glutInitWindowSize(620, 620);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
