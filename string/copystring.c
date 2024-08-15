#include<stdio.h>
 #include <string.h> 
int main(){

char s1[] ="abhinav vats";
// char* s2 =s1;    // s2 is a sallow copy 
// s1[0]= 'M';  // only change first letter 

int size =strlen(s1);
char s2[size];
for (int i = 0; i <=size; i++)
{
   s2[i] =s1[i];
}


printf("%s\n",s2);
  return 0;
}
