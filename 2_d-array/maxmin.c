// find max and min with index


#include<stdio.h>
int main (){
  int k=0,b=0,c=0,d=0;
    int a[2][4]={{2,1,3,4},{5,6,9,8}};
     int max =a[0][0];
   int min =a[0][0];
    for (int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
            if(max <a[i][j]){
                max=a[i][j];
                k=i;
                b=j;
            }
             if(min >a[i][j]){
                min=a[i][j];
                  c=i;
                d=j;
            }
        }   
    }
    printf("max element of this array :%d\n",max);
    printf("index of max is row :%d and coloum :%d\n",k,b);
     printf("min element of this array :%d\n",min);
      printf("index of max is row :%d and coloum :%d\n",c,d);
}