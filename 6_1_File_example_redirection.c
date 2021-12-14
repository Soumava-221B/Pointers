/* Reads each number from an input file and writes it
* rounded to 2 decimal places on a line of an output file. Using input/output redirection
*/
#include <stdio.h>

int
main(void)
{	
	double item;
	int input_status; /* status value returned by fscanf */

	/* Prepare files for input or output */
        // NOT REQUIRED
         
	/* Read each item, format it, and write it */
	input_status = scanf("%lf", &item);
	while (input_status == 1) {
		printf("%.2f\n", item);
		input_status = scanf("%lf", &item);
	}

	/* Close the files */
	//NOT REQUIRED
return (0);
}
