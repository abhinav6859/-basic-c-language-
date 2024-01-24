

#include <stdio.h>


int fact (int n)
{ int fact =1;
      for (int i =1;i<=n;i++)
      fact = fact *i;
      return fact;}



int main ()

{
      int n ;
      printf( "enter number ");
     scanf ("%d",& n);{
      int factorial =fact(n);
      printf("%d",factorial);
      }
      return 0;
}
