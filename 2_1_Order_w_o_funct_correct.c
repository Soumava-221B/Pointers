/*
* Ordering three numbers inside main itself.
*/
#include <stdio.h>

int
main(void)
{
	double num1, num2, num3; /* three numbers to put in order */

	/* Gets test data */
	printf("Enter three numbers separated by blanks> ");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	
	double temp; /* temporary variable to hold one number during swap */
	 	
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
		
	if (num1 > num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	
	if (num2 > num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}

	/* Displays results */
	printf("The numbers in ascending order are: %.2f %.2f %.2f\n",num1, num2, num3);

	return (0);
}

