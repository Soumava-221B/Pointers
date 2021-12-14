/*
* Estimate necessary solar collecting area size for a particular type of
* construction in a given location.
*/
#include <stdio.h>

double nth_item(FILE *, int);

int main(void)
{
        int roll,rank,topper=1000,index,status,ct=1;
        double marks;        

	FILE *roll_file; 
	FILE *toppers_file; 
	FILE *USP_file;

/* Get average heating degree days for coldest month from file */
	toppers_file = fopen("toppers_file.txt", "r");
	/*fscanf(toppers_file, "%d", &rank);
	topper = rank;*/
	status = fscanf(toppers_file, "%d", &rank);
	while (status == 1) {
	      //  printf("%d",rank);
		if (topper > rank) {
			topper = rank;
			index = ct;
		}
	++ct;
	//printf("___%d___%d\n",index,ct);
	status = fscanf(toppers_file, "%d", &rank);
	}
	fclose(toppers_file);
	
//Get corresponding average daily solar insolation from other file 
	roll_file = fopen("roll_file.txt", "r");
	roll = (int)(nth_item(roll_file, index));
	fclose(roll_file);
	
// Get corresponding average daily solar insolation from other file 
	USP_file = fopen("USP_file.txt", "r");
	marks = nth_item(USP_file, index);
	fclose(USP_file);	
	

// Display results 
	printf("Topper student details: \n");
	
	printf(" Roll No: %d \n ", roll);
	printf(" USP Marks: %.2f \n", marks); 	
	
	return (0);
}

/*
* Finds and returns the nth integer in a file.
* Pre: data_file accesses a file of at least n integers (n >= 1).
*/
double nth_item(FILE *data_file, int n)
{
	int i;
	double item;
	for (i = 1; i <= n; ++i)
		fscanf(data_file, "%lf", &item);
	return item;
}
