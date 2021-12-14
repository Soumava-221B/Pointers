
/*
* Tests function scale.
*/
#include <stdio.h> /* printf, scanf definitions */
#include <math.h> /* pow definition */

/* Function prototype */
double scale(double x, int n);

int
main(void)
{
	double num_1;
	int num_2;

	/* Get values for num_1 and num_2 */
	printf("Enter a real number> ");
	scanf("%lf", &num_1);
	printf("Enter an integer> ");
	scanf("%d", &num_2);

	/* Call scale and display result. */
	printf("Result of call to function scale is %f\n", scale(num_1, num_2)); //CALL BY VALUE

	return (0);
}


double
scale(double x, int n)
{
	double scale_factor; /* local variable - 10 to power n */

	scale_factor = pow(10, n);

	return (x * scale_factor);
}

	


