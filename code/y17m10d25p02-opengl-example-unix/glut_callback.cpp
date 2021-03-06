#include "glut_app.h"
#include <iostream>
#include <cstdlib>

//
// GLUT callback functions
//

int g_x = 300;
int g_circle_x = 50;
int g_circle_y = 50;

// This callback function gets called by the Glut
// system whenever it decides things need to be redrawn.
void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  //g_app_data->draw_yourself();
  // Test lines that draw all three shapes and some text.
  // Delete these when you get your code working.
  glColor3d(0.25,0.75,0.5);
  DrawRectangle(200, 200, 250, 250);
  glColor3d(0,0,1);
  DrawTriangle(g_x, 300, g_x+50, 300, g_x+50, 350);
  glColor3d(1.0,0.75,0.5);
  DrawCircle(g_circle_x, g_circle_y, 30);

  glColor3d(0,0,0);
  DrawCircle(10, 100, 3);
  DrawText(10,100,"Can you see this black text and 3 blue shapes?");

  glutSwapBuffers();
}


// This callback function gets called by the Glut
// system whenever a key is pressed.
void keyboard(unsigned char c, int x, int y)
{
  switch (c) 
    {
    case 'q':
    case 27: // escape character means to quit the program
      exit(0);
      break;
    case 'd':
      g_x += 10;
      break;
    case 'b':
      // do something when 'b' character is hit.
      std::cout << "b Key Down." << std::endl;
      break;
    default:
      return; // if we don't care, return without glutPostRedisplay()
    }

  glutPostRedisplay();
}


// This callback function gets called by the Glut
// system whenever the window is resized by the user.
void reshape(int w, int h)
{
  // Reset our global variables to the new width and height.
  g_screen_x = w;
  g_screen_y = h;

  // Set the pixel resolution of the final picture (Screen coordinates).
  glViewport(0, 0, w, h);

  // Set the projection mode to 2D orthographic, and set the world coordinates:
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0, w, 0, h);
  glMatrixMode(GL_MODELVIEW);

}

// This callback function gets called by the Glut
// system whenever any mouse button goes up or down.
void mouse(int mouse_button, int state, int x, int y)
{
  // translate pixel coordinates to display coordinates
  int xdisplay = x;
  int ydisplay = g_screen_y - y;
  if (mouse_button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) 
    {
      std::cout << "Left Mouse Down. @" << xdisplay << "," << ydisplay << std::endl;
      g_circle_x = xdisplay;
      g_circle_y = ydisplay;
    }
  if (mouse_button == GLUT_LEFT_BUTTON && state == GLUT_UP) 
    {
      std::cout << "Left Mouse Up. @" << xdisplay << "," << ydisplay << std::endl;
    }
  if (mouse_button == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN) 
    {
      std::cout << "Middle Mouse Down. @" << xdisplay << "," << ydisplay << std::endl;
    }
  if (mouse_button == GLUT_MIDDLE_BUTTON && state == GLUT_UP) 
    {
      std::cout << "Middle Mouse Up. @" << xdisplay << "," << ydisplay << std::endl;
    }
  glutPostRedisplay();
}

