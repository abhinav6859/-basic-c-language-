// program for diplay which index of elements is sum of  6

#include <stdio.h>
int main ()
{
    int i,j;
int arr[5]={4,5,6,7,2};

for ( i = 0; i <5; i++)
{
   for (j =i+ 1; j <= 4; j++)
   {
    if (( arr[i]+arr[j])==6){
  printf("%d %d\n  ",i,j);}
   }
   
}

}