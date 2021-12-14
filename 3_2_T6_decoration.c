/*
* Displays a real number in a box.
*/
# include <stdio.h>

void
print_rboxed(double rnum)
{
  printf("***********\n");
  printf("*          *\n");
  printf("* %6.2f   *\n", rnum);
  printf("*          *\n");
  printf("***********\n");
}

int main(void)
{
   print_rboxed(3.45);
}   
