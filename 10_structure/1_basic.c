#include<stdio.h>
int main(){
   struct pokemon
   {
   int hp;
   int speed ;
   int attack ;
   char level;

   };
   
   struct pokemon a;
    a.hp =7;
    a.speed=160;
    a.attack=89;
    a.level='a';

    struct pokemon b;
     b.hp =8;
    b.speed=170;
    b.attack=99;
    b.level='b';

   printf("%d\n",a.hp);
   printf("%d\n",a.speed);
   printf("%d\n",a.attack);
   printf("%c\n",a.level);
   
printf(" In b ...........\n");
   
   printf("%d\n",b.hp);
   printf("%d\n",b.speed);
   printf("%d\n",b.attack);
   printf("%c\n",b.level);

   printf(" enter a level \n");
   scanf("%c",&a.level);

    printf("%c\n",a.level);
}