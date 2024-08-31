#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
  typedef struct pokemon
   {
   int hp;
   int speed ;
   int attack ;
   char level;
   char name[15];
   }pokemon;
   
    typedef struct legendarypokemon
   {
   pokemon normal;
   char ability[40];
   }legendarypokemon;
   
   legendarypokemon mewto;
   strcpy(mewto.ability,"pressure");
   mewto.normal.attack  =69;

   printf("%d",mewto.normal.attack );
    
}