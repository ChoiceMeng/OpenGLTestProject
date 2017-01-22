// opengltest.cpp : 定义控制台应用程序的入口点。  
//  

#include "stdafx.h"

#define NDEBUG                  // 表示不使用debug的lib，使用release的lib，如果去除，将使用debug的lib  
#include "glut.h"               // 如果这里编译报错,请改为 #include <gl/glut.h>  
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("第一个OpenGL程序");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
	return 0;
}