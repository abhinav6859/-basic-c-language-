// write a program for 5 by 5 matrix which have 25 10 values

#include<stdio.h>
int main (){
    int a[5][5];
    for (int i=0;i<5;i++){
        for (int j = 0; j < 5; j++)
        {
            a[i][j] =10;
             printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
}