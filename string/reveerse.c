#include<stdio.h>
#include<string.h>  
int main(){
int i,j;

char str[40];
char str1[40];

gets(str); 

int length=strlen(str);

for(int i=0;i<=length;i++){
    printf("%c",str[length-i]);
}


  return 0;
}