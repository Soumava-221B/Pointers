/*
* Separates a number into three parts: a sign (+, -, or blank),
* a whole number magnitude, and a fractional part.
*/

# include <stdio.h>
# include <math.h>

void separate_ptr(double *value,char *signp,int *wholep,double *fracp);

int main()
{
        double value; /* input - value to be split */
        char sign;    /* output - sign of num */
        int whole;    /* output - whole number magnitude of num */
        double frac;  /* output - fractional part of num */
        
        printf("Enter a value to analyze>>");
        scanf("%lf",&value);
         
        separate_ptr(&value, &sign, &whole, &frac); // CALL BY ADDRESS 
        
        
	/* Prints results */
	printf("Pointers here with function printing in main 1_10:02  :) \n");
	printf("Parts of %.4f\n sign: %c\n", value, sign);
	printf(" whole number magnitude: %d\n", whole);
	printf(" fractional part: %.4f\n", frac);                                  
	return 0;
}

void separate_ptr(double *value,char *signp,int *wholep,double *fracp)   // INPUT P/M: VALUE; OUTPUT: ALL OTHERS.
{
         double magnitude; /* local variable - magnitude of num */
        /* Determines sign of num */
	if (*value < 0)
		*signp = '-';
	else if (*value == 0)
		*signp = ' ';
	else
		*signp = '+';

	/* Finds magnitude of num (its absolute value) and
	separates it into whole and fractional parts */
	magnitude = fabs(*value);
	
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;

}

