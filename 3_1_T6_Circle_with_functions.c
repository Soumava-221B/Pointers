/*
* Computes the circumference of a circle with radius r.
* Pre: r is defined and is > 0.
* PI is a constant macro representing an approximation of pi.
*/
# include <stdio.h> 
# include <math.h>
# define PI 3.14159

double
find_circum(double r)
{
   return (2.0 * PI * r);
}

/*
* Computes the area of a circle with radius r.
* Pre: r is defined and is > 0.
* PI is a constant macro representing an approximation of pi.
* Library math.h is included.
*/
double
find_area(double r)
{
  return (PI * pow(r, 2));
}

int main(void)
{
  double radius; /* input - radius of a circle */
  double area; /* output - area of a circle */
  double circum; /* output - circumference */

  /* Get the circle radius */
  printf("Enter radius> ");
  scanf("%lf", &radius);

  /* Calculate the area */
  area = find_area(radius);

  /* Calculate the circumference */
  circum = find_circum(radius);

  /* Display the area and circumference */
  printf("The area is %.4f\n", area);
  printf("The circumference is %.4f\n", circum);

  return (0);
}   


