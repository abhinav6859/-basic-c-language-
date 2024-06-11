

#include <stdio.h>
// before recursive call
void increase (int x,int n)
{ 
    if (x>n)
    return ;
    printf("%d ",x);
    return increase(x+1,n);
      }



int main ()
{
      int n ;
      printf( "enter number ");
     scanf ("%d",& n);
      increase(1,n);
      
      return 0;
}

// after recursive call

// void decrease (int n)
// { 
//     if (n<0)
//     return ;
   
//      decrease(n-1);
//      printf("%d ",n);
//      return;
//       }

// int main ()
// {
//       int n ;
//       printf( "enter number ");
//      scanf ("%d",& n);
//       decrease(n);
      
//       return 0;
// }