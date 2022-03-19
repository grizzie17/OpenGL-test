
#include <GL/glut.h>

void helloWorld(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex3d(-0.25, -0.25, 0.0);
	glVertex3d(0.25, -0.25, 0.0);
	glVertex3d(0.25, 0.25, 0.0);
	glVertex3d(-0.25, 0.25, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(300, 300);
	// glutInitWindowSize( 100, 100 );
	glutCreateWindow("Hello World!");
	glutDisplayFunc(helloWorld);
	glutMainLoop();
	return 0;
}