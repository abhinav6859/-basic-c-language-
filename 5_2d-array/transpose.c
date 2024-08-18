#include<stdio.h>
int main (){
    int r,c;
    
    printf("enter ur row and coloum of the array :");
    scanf("%d %d",&r,&c);
   int arr[r][c];
   int a[c][r];
          printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &arr[i][j]);
    }
}
  printf(" elements of first matrix:\n");
     for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", arr[i][j]);
    }
    printf("\n");
}
 printf("\n transpose of the matrix is :\n");
     for (int i = 0; i < c; i++)
    {
       for (int j = 0; j<r;j++)

       { a[i][j]=arr[j][i];
       printf("%d ",a[i][j]);
       }
       printf("\n");
    }

}