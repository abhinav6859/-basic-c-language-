#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct pokemon   // if we want pass any structure then globaly initialized
   {
   int hp;
   int speed ;
   int attack ;
   char level; 
   char name[15];
   }pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    return;
}
int main(){
 

pokemon picachu;
picachu.hp=90;
printf("%d\n",picachu.hp);

fun(picachu);

}