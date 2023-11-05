#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
GLfloat xoayTay = 45;
GLfloat xoaynguocphai = -0.1;
GLfloat xoaychan = 45;
GLfloat xoayxuoichan = -0.1;
GLfloat anpha = 0.0;
GLfloat anpha2 = 0.0;
GLfloat xoaydau = 0.0;
GLfloat xoaydau1 = 0.1;





void truc()
{
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 0, 0);
	glVertex3f(10.0, 0, 0);

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 0, 0);
	glVertex3f(-10, 0, 0);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 0, 0);
	glVertex3f(0.0, 10, 0);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 0, 0);
	glVertex3f(0.0, -10, 0);

	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0, 0);
	glVertex3f(0.0, 0, 10);
	glEnd();
	glFlush();
}
// vẽ đầu
void head() {
	glPushMatrix();
	
	if (xoaydau < -45 || xoaydau > 45) {
		xoaydau1 = xoaydau1 * -1;
	}
	xoaydau = xoaydau + xoaydau1;
	glRotated(xoaydau, 0, 1, 0);


	glPushMatrix();
	glColor3f(0.0, 0, 1);
	glTranslated(0, 1.7, 0);
	glutSolidCube(0.8);
	glPopMatrix();



	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslated(0, 5, 0);
	glRotated(90, 1, 0, 0);
	GLUquadricObj* qua = gluNewQuadric();
	gluCylinder(qua, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0, 4, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslated(0, 4, 0);
	glRotated(90, 1, 0, 0);
	GLUquadricObj* qr = gluNewQuadric();
	gluCylinder(qr, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();



	
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0, 4, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	//mắt
	glPushMatrix();
	glColor3f(1.0, 0, 0);
	glTranslated(0, 1.8, 0.5);
	glScaled(1.5, 0.5, 1);
	glutSolidSphere(0.2, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0, 1.3, 0);
	glRotatef(90, 1, 0, 0);
	GLUquadricObj* qu = gluNewQuadric();
	gluCylinder(qu, 0.2f, 0.2f, 0.2f, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glutPostRedisplay();

}
void co() {
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0, 1.3, 0);
	glRotatef(90, 1, 0, 0);
	GLUquadricObj* quaric = gluNewQuadric();
	gluCylinder(quaric, 0.2f, 0.2f, 0.2f, 20, 20);
	glPopMatrix();
}
void body() {
	//body
	glPushMatrix();
	
	glColor3f(1.0, 0.0, 0.0);
	//glTranslatef(0, 2, 0);
	//glScalef(1, 2, 1);
	///glTranslatef(anpha, 1.0, 1.0);
	glutSolidCube(2);
	glPopMatrix();
	//glEnd();
	//glFlush();
    
	// cánh tay ngoài
	glPushMatrix();
	glTranslated(-5, 0, 3.4);
	glRotated(90, 1, 0, 0);
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslated(5, 0, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslated(5, -0.1, 0);
	glRotated(90, 1, 0, 0);
	GLUquadricObj *qua = gluNewQuadric();
	gluCylinder(qua, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslated(5, -1.2, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslated(5, -1.3, 0);
	glRotated(90, 1, 0, 0);
	GLUquadricObj* q = gluNewQuadric();
	gluCylinder(q, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glTranslated(5, -2.4, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	
	glPopMatrix();

	

	





	


}
void quan() {
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(0, -1.4, 0);
	glRotatef(90, 1, 0, 0);
	glScalef(4, 1, 1);
	glutSolidCube(0.5);
	glPopMatrix();

	/*glPushMatrix();
	glColor3f(249, 244, 0);
	glTranslatef(3, 0, 0);
	GLUquadric* hi = gluNewQuadric();
	gluDisk(hi, 1.0f, 2.0f, 30, 1);
	glPopMatrix();
*/
	/*	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(0, -1.4, 0);
	glRotatef(90, 1, 0, 0);
	GLUquadricObj* quaric = gluNewQuadric();
	gluCylinder(quaric, 0.5f, 0.3f, 0.5f, 20, 1);
	glPopMatrix();*/


}
//xoay tay 
void xoaytayphai() {

	xoayTay += xoaynguocphai;
	if (xoayTay <= -45 || xoayTay >= 45) {
		xoaynguocphai = -xoaynguocphai;
	}

	glutPostRedisplay();
}

void xoaytaytrai() {
	xoayTay += xoaynguocphai;
	if (xoayTay <= -45 || xoayTay >= 45) {
		xoaynguocphai = -xoaynguocphai;
	}

	glutPostRedisplay();
}


void xoaychantrai() {
	xoaychan += xoayxuoichan;
	if (xoaychan <= -45 || xoaychan >= 45) {
		xoayxuoichan = -xoayxuoichan;
	}
	glutPostRedisplay();
}
void xoaychanphai() {
	xoaychan += xoayxuoichan;
	if (xoaychan <= -45 || xoaychan >= 45) {
		xoayxuoichan = -xoayxuoichan;
	}
	glutPostRedisplay();
}

void sung() {

}








void tay() {
	//Khuc noi phai
	glPushMatrix();
	glTranslatef(1.5, 0.5, 0);
	glRotated(xoayTay, -1, 0, 0);
	xoaytayphai();
	glTranslatef(-1.5, -0.5, 0);


    // khúc  tay phải
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(1.3, 0.5, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	// khúc nối tay phải
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(1.4, 0.4, 0);
	glRotatef(90, 1, 1, 0);
	GLUquadricObj* quaric = gluNewQuadric();
	gluCylinder(quaric, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();

	// khuc noi 2
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(2.2, -0.4, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	//tay 2
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(2.2, -0.5, 0);
	glRotatef(90, 1, 0, 0);
	GLUquadricObj* quar = gluNewQuadric();
	gluCylinder(quar, 0.2f, 0.2f, 1.0f, 20, 1);
	
    glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();
    

	// khúc nối cuối
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(2.2, -1.6, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();
    glPopMatrix();
	glPopMatrix();
	
    

	// khúc nối 1 tay trái
	glPushMatrix();
	//glRotatef(-180, 1, 0, 0);
	//glTranslatef(0, -1, 0);
	
	glPushMatrix();
	glTranslatef(1.5, 0.5, 0);
	glRotated(xoayTay, 1, 0, 0);
	xoaytaytrai();
	glTranslatef(-1.5, -0.5, 0);

	glPushMatrix();
	glColor3f(1.5, 0.5, 0.5);
	glTranslatef(-1.3, 0.5, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	//khúc tay trái
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(-1.4, 0.4, 0);
	glRotatef(-90, -1, 1, 0);
	GLUquadricObj* quari = gluNewQuadric();
	gluCylinder(quari, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();
	

	// khúc nối 2
	glPushMatrix();
	//glRotatef(xoayTay, 0,0 , 1);
	//xoaytaytrai();
	glPushMatrix();
	glColor3f(1.5, 0.5, 0.5);
	glTranslatef(-2.2, -0.4, 0);
    glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	//khúc tay 2
	glPushMatrix();
	glRotatef(xoayTay, 1, 0, 0);
	xoaytaytrai();
	//glTranslatef(-2.2, -0.4, 0);
	//glRotatef(xoayTay, 0, 0, 1);
	//xoaytaytrai();
	//glTranslatef(2.2, 0.4, 0);
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(-2.2, -0.5, 0);
	glRotatef(-90, -1, 0, 0);
	GLUquadricObj* qua = gluNewQuadric();
	gluCylinder(qua, 0.2f, 0.2f, 1.0f, 20, 1);
	glPopMatrix();

	// khúc nối cuối
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(-2.2, -1.6, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();
    glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

}

// vẽ chân 
void chan() {
	// chân trái
	glPushMatrix();
	glTranslated(-1.5, -0.5, 0);

	glRotated(xoaychan, -1, 0, 0);
	xoaychantrai();
	glTranslated(1.5, 0.5, 0);


	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(-0.7, -1.7, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(-0.7, -2.6, 0);
	//glRotatef(90, 1, 0, 0);
	glScalef(0.7, 2, 1);
	glutSolidCube(0.7);
	glPopMatrix();


	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(-0.7, -3.5, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(-0.7, -3.8, 0);
	glRotatef(-90, 1, 0, 0);
	GLUquadricObj* quari = gluNewQuadric();
	gluCylinder(quari, 0.3f, 0.1f, 0.3f, 20, 1);
	glPopMatrix();

	glPopMatrix();

	//chân phải
	glPushMatrix();
	glTranslated(-1.5, -0.5, 0);
	glRotated(xoaychan, 1, 0, 0);
	xoaychanphai();
	glTranslated(1.5, 0.5, 0);


	/*glPushMatrix();
	glTranslated(-1.5, -0.5, 0);
	glRotated(xoaychan, 1, 0, 0);
	glTranslated(1.5, 0.5, 0);*/

	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0.7, -1.7, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(0.7, -2.6, 0);
	//glRotatef(90, 1, 0, 0);
	glScalef(0.7, 2, 1);
	glutSolidCube(0.7);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0, 0.5, 0.5);
	glTranslatef(0.7, -3.5, 0);
	glutSolidSphere(0.2f, 50, 50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(0.7, -3.8, 0);
	glRotatef(-90, 1, 0, 0);
	GLUquadricObj* quar = gluNewQuadric();
	gluCylinder(quar, 0.3f, 0.1f, 0.3f, 20, 1);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}
/*void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'r':
		// Nút 'r': xoay toàn bộ cơ thể robot về bên phải
		anpha += 0.5;
		break;
	case 'l':
		// Nút 'l': xoay toàn bộ cơ thể robot về bên trái
		anpha -= 0.5;

		break;
	case 'u':
		anpha2 -= 0.5;
		break;
	case 'd':
		anpha2 += 0.5;
		break;


	}
	glutPostRedisplay(); // Yêu cầu vẽ lại cảnh
}*/


void Display() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(10, 5, 10, 0, 0, 0, 0, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	truc();
	
	
	
	head();
	co();
	body();
	
	quan();
	//khucnoibody();
	tay();
	chan();
	glutPostRedisplay();
	glFlush();
	glutSwapBuffers();
	//glutPostRedisplay();
	/*glRotated(anpha, 0.0, 1.0, 0.0);
	glRotated(anpha2, 1, 0.0, 0.0);*/


}

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	GLfloat mat_ambient[] = { 0.0, 0.0, 1.0, 1.0 };
	GLfloat mat_diffuse[] = { 0.6, 0.6, 0.6, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	GLfloat lightIntensity[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_position[] = { -2.0, 2.0, 3.0, 0.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightIntensity);
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GL_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 500);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Warrior");
	init();
	glutDisplayFunc(Display);
	glutReshapeFunc(reshape);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}