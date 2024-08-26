#include<stdio.h>
int main(){
 typedef int* int_pointer ;  // without typedef it give error
int x=5,y=7;
int_pointer a=&x,b=&y;
printf("%p  \n%p   ",a,b)  ;

// int x=5,y=7;
// int* a=&x,*b=&y;
// printf("%p  \n%p   ",a,b)  ;

}