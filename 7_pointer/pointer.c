

#include<stdio.h>
int main (){

int a=25;
int* x=&a;   // store address of int

// *x=7 ;   // then a is changed  

int** y=&x;// int** store address  of int*
int*** z=&y;

    printf("%d\n",a);
   printf("%d\n",*x);
    printf("%d\n",**y);  
     printf("%d\n",***z);  

     // all are 25
}
// printf("%p\n",x),printf("%p\n",&a)   both are equal