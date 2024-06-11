
#include <stdio.h>

void greet (int n)
{ if (n==0 )
 return ;  // base code
      printf("good morning\n");
      return greet (n-1);
      }


int  main ()
{
     int n ;
      printf( "enter number :");
     scanf ("%d",&n);
    greet(n);
     
      
      return 0;
}
