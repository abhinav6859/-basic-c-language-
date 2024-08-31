// create a structure 'person' having attributes as edge and weight .
// access its structure variables using pointers .


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct person   
   {
   int age ;
  float weight;

   }person;

int main(){
   person a;
  a.age=80;
person *x= &a;
(*x).age=100;
printf("%d\n",a.age);

}