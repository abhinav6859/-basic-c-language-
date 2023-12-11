// display this gp 100,50,25 .... up to n 
#include <stdio.h>
int main()
{
    int n;
    printf("enter last digit \n ");
    scanf("%d", &n);
     int a=0;
    for (int i = 2; i <= n-1; i++){
    if (n%i==0)
    {
     int a=1;
     break; 
    }
    }
    if (a==0)  printf("number is prime");    
   else printf(" number is composite");
   return 0;
}