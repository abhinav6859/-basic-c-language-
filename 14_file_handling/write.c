#include<stdio.h>
int main(){
  //   creating a file 
  FILE* ptr=fopen("a.txt","w");  // create file from w and read from r
  char str[] ="hari om";
  fputs(str,ptr);
  fclose(ptr);  // close a file to remove it from the memory.
}
