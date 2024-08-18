
#include <stdio.h>

int power (int a,int b)
{if (b==0) return 1;
   int pow;

  
  pow= a*power(a,b-1);
  
    return pow;
      }

int main ()
{
      int a ;
      printf( "enter base ");
     scanf ("%d",& a);
      int b ;
      printf( "enter power ");
     scanf ("%d",& b);
     
   int l=  power(a,b);
      printf( "ans is %d ",l);;
      
      return 0;
}
