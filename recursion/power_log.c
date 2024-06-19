// same work as a power file but take less   call than that 


#include <stdio.h>

int power (int a,int b)
{if (b==1) return a;
int x;


  x = power(a,b/2);
 
 int pow=x * x;
 if (b%2==1){
  return pow*a;
}
else
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
