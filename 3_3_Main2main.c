/*
* Separates a number into three parts: a sign (+, -, or blank),
* a whole number magnitude, and a fractional part.
*/

# include <stdio.h>
# include <math.h>

int i=1;

int main()
{
        while(i<3)
        {
          i++;
          printf("%d\n",i);
          main();          
        }  
        printf("Recursive");
	return 0;
}

	


