
#include <stdio.h>

void decrease (int n)
{ 
    if (n<0)
    return ;
    printf("%d ",n);
    return decrease(n-1);
      }


int main ()
{
      int n ;
      printf( "enter number ");
     scanf ("%d",& n);
      decrease(n);
      
      return 0;
}