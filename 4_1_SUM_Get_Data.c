// Using output parameters as actual arguments

# include <stdio.h>



void get_data(int *num1,int *num2);
void get_data2(int **p3);
int main()
{

   int num1,num2;
   get_data(&num1,&num2);
   printf("%d %d", num1,num2);
   
}

void get_data(int *p1,int *p2)
{
   printf("enter one numbers >\n");
   scanf("%d",p1);
   get_data2(&p2);
}

void get_data2(int **p3)
{
   printf("OK... 2 indirection \n");
   printf("enter 2nd numbers >\n");
   scanf("%d",*p3);
}
