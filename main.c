/* main.c */

#include <stdio.h>
#include "sum.h"
int main()
{
   int var=RVAL;
   print_sum();
   printf("\nThe factorial of 5 is %d", factorial(5));
   printf("\nThe value of macro RVAL is %d\n", var);
   return 0;
}
