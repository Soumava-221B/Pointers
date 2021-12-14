/*
* Ordering three numbers inside main using pass by address ... without function
*/
#include <stdio.h>

void order(double *smp,double *lgp)
{ 
      double temp; /* temporary variable to hold one number during swap */
	 /* Compares values pointed to by smp and lgp and switches if necessary */
  
      if (*smp > *lgp) {
		temp = *smp;
		*smp = *lgp;
		*lgp = temp;
	}
}

int
main(void)
{
	double num1, num2, num3,temp; /* three numbers to put in order */
        
	/* Gets test data */
	printf("Enter three numbers separated by blanks> ");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	
	order(&num1,&num2);
	order(&num1,&num3);
	order(&num2,&num3);

		
	/* Displays results */
	printf("OFFLINE \n");
	printf("The numbers in ascending order are (using pointers in main): %.2f %.2f %.2f\n",num1, num2, num3);

	return (0);
}

