#include<stdio.h>
#include<string.h>
int main(){
   struct book {
   int noofpages;
   float price ;
   char name[50];

   }a,b,c;
   
   
    a.noofpages =100;
    a.price=411.5;
    strcpy(a.name,"secret seven");
 

   printf("%d\n",a.noofpages);
   printf("%f\n",a.price);
  printf("%s\n",a.name);

  
}