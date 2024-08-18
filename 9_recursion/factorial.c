
#include <stdio.h>

int fact (int n)
{ if (n==1 || n==0) return 1;  // base code
      return n*fact(n-1);
      }


int main ()
{
      int n ;
      printf( "enter number ");
     scanf ("%d",&n);{
      int factorial =fact(n);
      printf("%d \n",factorial);
      }
      return 0;
}
