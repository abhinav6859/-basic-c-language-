#include<stdio.h>
int main(){

 typedef struct pokemon 

{
   int hp;
   int speed ;
   int attack ;
   char level;

   }pokemon ;
   
    pokemon arr[3];
    arr[0].hp =7;
    arr[0].speed=160;
    arr[0].attack=89;
    arr[0].level='a';

    arr[1].hp =8;
    arr[1].speed=170;
    arr[1].attack=99;
    arr[1].level='b';

     arr[2].hp =9;
    arr[2].speed=180;
    arr[2].attack=109;
    arr[2].level='c';
   
   for (int i = 0; i < 3; i++)
   {
    
    printf("%d\n",arr[i].hp);
   printf("%d\n",arr[i].speed);
   printf("%d\n",arr[i].attack);
   printf("%c\n",arr[i].level);

   printf(" ...........\n");
   }
   
}