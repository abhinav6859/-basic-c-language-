// u have nth stair ,u can use single step double step nd calculate 
// number of ways , so that the person reaches nth stair using recursion 
#include<stdio.h>
int main (){
    int way(int n){
    int l=0;
    //  if (n==1) return 1;
    // if (n==2) return 2;
    //     OR

   if (n<=2) return n;
    int totalways=way(n-1)+way(n-2);
        return totalways;
    }

int n; 
printf(" give number of stair :");
scanf("%d",&n);

int ways = way(n);

printf("%d \n",ways);
}