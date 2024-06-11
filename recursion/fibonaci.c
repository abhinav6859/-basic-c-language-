
#include <stdio.h>

int fibonaci (int a)
{if (a==1||a==2) return 1;
  

  
 int ans= fibonaci(a-2)+fibonaci(a-1);
  
    return ans;
      }

int main ()
{
      int a ;
      printf( "enter base ");
     scanf ("%d",& a);
     
   fibonaci(a);
      printf( "ans is %d ",fibonaci(a));
      
      return 0;
}
