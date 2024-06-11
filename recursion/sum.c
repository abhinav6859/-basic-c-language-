// sum till n number using recursion

#include <stdio.h>
// before recursive call
int sum (int a,int n)
{

 if (n==0) return 0;
   a=n+sum(a,n-1);
 
   
  return a;
   
    
      }


int main ()
{
      int n ,m;

      printf( "enter number ");
     scanf ("%d",& n);
    
  int l=    sum(0,n);
       printf("%d ",l);
      return 0;
}
