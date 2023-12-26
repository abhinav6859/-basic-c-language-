#include<stdio.h>
int divide (float a,float  b)
{ 
    return  a/b;
}
int substract (int a,int b)
{ float division =divide (a,b);
    printf(" division  is: %f\n",division);
    return (a-b);
}
int multiply (int a,int b){
    int substraction =substract (a,b);
    printf(" difference  is: %d\n",substraction);

    return a*b;
}
int add(int a,int b)
{ int  product =multiply (a,b);
printf(" product is: %d\n",product);
    return a+b;
  
}
int main (){
int a;
printf("enter number\n");
scanf("%d",&a);
int b;
printf("enter number\n");
scanf("%d",&b);
int sum=add (a,b);
printf(" sum is : %d\n",sum);
return 0;}