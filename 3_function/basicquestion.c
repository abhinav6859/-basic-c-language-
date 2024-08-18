//write a program that prints namaste if user is indian &bonjour if user is french 

#include<stdio.h>
void namaste ();
void bonjour();

int main ()
{  printf ("enter f for french &i for indian :");
char ch;
scanf("%c",&ch);
if (ch=='i')
{
    printf("namaste\n");}

if (ch=='f'){
    printf("bonjour\n");
}

    return 0;

}
void namaste (){
printf("namaste");
}
void bonjour (){
printf("bonjour");
}