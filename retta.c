#include <stdio.h>

int main()
{
  // variabili
  double x1 = 3; 
  double x2 = 6;
  double y1 = 4; 
  double y2 = 5; 

  // intercetta
  double q = (y1*x2-y2*x1)/(x2-x1);
  // coefficiente angolare
  double m = (y1-q)/x1; 
  
  printf("q = %f\n", q); 
  printf("m = %f\n", m);

  return 0;

}
