#include "scene.h"

void  Init(){
	glMatrixMode(GL_PROJECTION);
	gluPerspective(50.0f,800.0f/600.0f,0.1f,1000.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Draw(){
	glClearColor(0.0f,0.0f,0.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor4ub(255,255,255,255);
	glVertex3f(-0.2f,-0.2f,-1.5f);

	glColor4ub(255, 0, 0, 255);
	glVertex3f(0.2f,-0.2f,-1.5f);

	glColor4ub(0,255,0,255);
	glVertex3f(0.0f,0.2f,-1.5f);

	glEnd();

}