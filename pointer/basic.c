//(*)  pointer

// pointer store address of variable 

#include<stdio.h>
int main (){

int a=5;
int* x=&a;

    printf("%p\n",x);// address of a 
    printf("%p\n",&x);   //address of address of a
printf("%d\n",*x);
}
// printf("%p\n",x),printf("%p\n",&a)   both are equal