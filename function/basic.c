#include<stdio.h>
void greet ()
{
    printf("good morning\n");
    return;
}
int add(int a,int b)
{
    return a+b;
}
int main (){
    greet ();
     greet ();
      greet ();
      

int a,b;
printf("enter number\n");
scanf("%d",&a);
printf("enter number\n");
scanf("%d",&b);
int sum=add (a,b);
printf("%d",sum);
return 0;}