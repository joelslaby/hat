#include <stdio.h>
#include <math.h>

/* TDOA ALGORITHM VERSION 1
 * Finds the intersect points of two receiver circles and selects the closest one to the last receiver
 */


//Structures
struct rec {
  float x;
  float y;
  float time;
};

// Variables
float xi;
float yi;
float xi_prime;
float yi_prime;

//Functions
int circle_circle_intersection(float x0, float y0, float r0, float x1, float y1, float r1);


int main()
{
  printf("TDOA Triangulation Algorithm\n\nInput Receiver Information:\n");

  struct rec A;
  printf("Receiver A:\n\tx = "); scanf("%f", &xi);
  A.x = xi;
  printf("\ty = "); scanf("%f", &xi);
  A.y = xi;
  printf("\ttime distance value = "); scanf("%f", &xi);
  A.time = xi;
  
  struct rec B;
  printf("Receiver B:\n\tx = "); scanf("%f", &xi);
  B.x = xi;
  printf("\ty = "); scanf("%f", &xi);
  B.y = xi;
  printf("\ttime distance value = "); scanf("%f", &xi);
  B.time = xi;

  struct rec C;
  printf("Receiver C:\n\tx = "); scanf("%f", &xi);
  C.x = xi;
  printf("\ty = "); scanf("%f", &xi);
  C.y = xi;
  printf("\ttime distance value = "); scanf("%f", &xi);
  C.time = xi;
  
  int ans = circle_circle_intersection(A.x, A.y, A.time,  B.x, B.y, B.time);
  
  if( sqrt( pow(xi_prime - C.x, 2) + pow(yi_prime - C.y, 2) )    <     sqrt( pow(xi - C.x, 2) + pow(yi - C.y, 2) ) ) {
    xi = xi_prime;
    yi = yi_prime;
  }
  
  if(ans == 1) {
    printf("Drowning Victim is at: (%f, %f)\n", xi, yi);
  } 
}


int circle_circle_intersection(float x0, float y0, float r0, float x1, float y1, float r1)
{
  float a, dx, dy, d, h, rx, ry;
  float x2, y2;

  /* dx and dy are the vertical and horizontal distances between
   * the circle centers.
   */
  dx = x1 - x0;
  dy = y1 - y0;
  
  /* Determine the straight-line distance between the centers. */
  //d = sqrt((dy*dy) + (dx*dx));
  d = hypot(dx,dy); // Suggested by Keith Briggs
  
  /* Check for solvability. */
  if (d > (r0 + r1))
    {
      printf("Error: No solution. Circles do not intersect.");
      return 0;
    }
  if (d < fabs(r0 - r1))
    {
      printf("No solution. one circle is contained in the other");
      return 0;
    }
  printf("\nSolvable Solution\n");
  
  /* 'point 2' is the point where the line through the circle
   * intersection points crosses the line between the circle
   * centers.  
   */

  /* Determine the distance from point 0 to point 2. */
  a = ((r0*r0) - (r1*r1) + (d*d)) / (2.0 * d) ;
  
  /* Determine the coordinates of point 2. */
  x2 = x0 + (dx * a/d);
  y2 = y0 + (dy * a/d);

  /* Determine the distance from point 2 to either of the
   * intersection points.
   */
  h = sqrt((r0*r0) - (a*a));

  /* Now determine the offsets of the intersection points from
   * point 2.
   */
  rx = -dy * (h/d);
  ry = dx * (h/d);

  /* Determine the absolute intersection points. */
  xi = x2 + rx;
  xi_prime = x2 - rx;
  yi = y2 + ry;
  yi_prime = y2 - ry;

  
  return 1;
}
