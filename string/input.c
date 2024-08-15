#include<stdio.h>
#include<string.h>  // for %s
int main(){

char str[40];

scanf("%s",str);   //in this not execute input after space 

// to remove this drawback we use this 
// using scanset in scanf
//scanf("%[^\n]s",str); // this scanf act like gets means ignore space
//or
//gets(str); 

printf("ur input was : %s ",str);
printf("\n ");

  return 0;
}