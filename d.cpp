#include<GL/gl.h>
#include<GL/glut.h>

float x1, x2, y1, y2, m, i, j;
float dx, dy;

void main(int argc, char** argv){
   cout<<"Enter the value of X1";
   cin>>x1;
   cout<<"Enter the value of x2";
   cin>>x2;

   cout<<"Enter the value of y1";
   cin>>y1;
   cout<<"Enter the value of y2";
   cin>>y2;

   dx = x2 - x1;
   dy = y2 - y1;
   m = dy/dx;

      
}
