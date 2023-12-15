#include <stdio.h>
int main(void)
{
    int n;
    int r=0;
    printf("enter any number\n");
    scanf("%d",&n);
    {
    while (n>0){
         r=r*10;
     r=r+  (n%10);
    n=n/10;  }
     printf(" reverse of number is %d\n",r);
} 
}