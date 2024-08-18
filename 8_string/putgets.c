#include<stdio.h>
#include<string.h>  // for %s
int main(){

char str[40];
//scanf("%s",str);  //no need for &
//  only ur first word will be considered
//            or 
gets(str);   // entire sentence can be input

printf("ur input was : %s ",str);
printf("\n ");

// for print string 
puts(str);

// it can print other string also which is not declared
puts("aaa");

  return 0;
}