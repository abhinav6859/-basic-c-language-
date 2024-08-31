#include<stdio.h>
#include<string.h>
    int main(){
   
 typedef  struct pokemon
   {
   int hp;
   int speed ;
   int attack ;
   char level;
char str[90];
   }pokemon;
   
   pokemon a,b,c;
    a.hp =7;
    a.speed=160;
    a.attack=89;
    a.level='a';
 strcpy(a.str,"abhinav");
  b=a;

   printf("%d\n",b.hp);
   printf("%d\n",b.speed);
   printf("%d\n",b.attack);
   printf("%c\n",b.level);
   strcpy(b.str,a.str);
    strcat(b.str," vats");
    printf("%s\n",b.str);
  
}
    
