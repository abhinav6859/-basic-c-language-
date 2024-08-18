// u have nth stair ,u can use single step double step ,three step nd calculate 
// number of ways , so that the person reaches nth stair using recursion 
//we can take first step second step , third step 
#include<stdio.h>
int main (){
    int way(int n){
    int l=0;
   

   if (n<=2) return n;
    if (n==3) return 4;
    int totalways=way(n-1)+way(n-2)+way(n-3);
        return totalways;
    }

int n; 
printf(" give number of stair :");
scanf("%d",&n);

int ways = way(n);

printf("%d \n",ways);
}