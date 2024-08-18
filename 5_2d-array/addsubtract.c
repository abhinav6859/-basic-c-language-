// write a program to add and subtract two matrices 
#include<stdio.h>
int main (){
    int a[2][4]={{1,2,3,4},{5,6,7,8}};
    printf("\n first array \n");
    for (int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
             printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");

    

      int a1[2][4]={{9,10,11,12},{13,14,15,16}};
       printf(" second array \n");
    for (int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
             printf("%d ",a1[i][j]);
        }
        printf("\n");
        
    }
        printf("\n\n");


     int a2[2][4];
       printf("sum of both twop array is  \n");

    for (int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
          a2[i][j] = a[i][j]+a1[i][j];
             printf("%d ",a2[i][j]);
        }
        printf("\n");
        
    }
     printf("\n");


     int a3[2][4];
       printf("substraction of both twop array is  \n");

    for (int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
          a3[i][j] = a1[i][j]-a[i][j];
             printf("%d ",a3[i][j]);
        }
        printf("\n");
        
    }
      printf("\n");

}