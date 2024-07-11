#include<stdio.h>
#include<string.h>  // for %s
int main(){

char str[40];

// using scanset in scanf
scanf("%[^\n]s",str); // this scanf act like gets means ignore space
//or
//gets(str); 

printf("ur input was : %s ",str);
printf("\n ");

  return 0;
}