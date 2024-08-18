// table of n in function

#include<stdio.h>

int t (int n){
 
for (int i = n; i <= 10* n; i=i+n)

   printf("%d\n",i);
    return 0;

}


int main()
{ int n;
    printf("enter n: ");
    scanf("%d",&n);
{
    int table=t (n);

    return 0;}

}