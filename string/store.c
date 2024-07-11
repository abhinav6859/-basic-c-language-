#include<stdio.h>
 #include <string.h> //for strlen
int main(){

char str[]="hari om\0";


//str[i] or i[str] or *(str+i) or *(i+str) all do work same

int i=0;
while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
}
 printf("\n");

 int length = 0;
    length = strlen(str);
 
    // displaying the length of string
    printf("Length of string str is %d\n", length);
 
  return 0;
}