/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */  //1st problem added the missing semicolon ";"
   int integer2; /* second number to be input by user */  //2nd problem added the missing semicolon ";"
   int sum;      /* variable in which sum will be stored */   //3rd problem variable x is defined for sum but then used sum for all summations
														      // and x is not used any of them, so x replaced with sum

   printf( "Enter first integer\n" ); /* prompt */        //4th problem added the missing double quatation mark (")
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */

