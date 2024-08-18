//count the number of elements in given array greater than a given nuber x.


#include<stdio.h>
int main()
{
int count=0;
int x=7;

    int arr[9] = {2,4,6,8,1,76,45,7,98}; //declare an array 
   
     
   for (int  i = 0; i <= 8; i++)
   {
    if (x<arr[i]){
      count++;
    }

   }
   {
    printf("%d ",count);
   }
    printf("\n");       

}

