// write a program to multiply two matrices 
#include<stdio.h>
int main (){
    int a[2][3]={{1,2,3},{4,5,6}};
    printf("\n first array \n");
    for (int i=0;i<2;i++){
        for (int j = 0; j < 3; j++)
        {
             printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");

    

      int a1[3][2]={{10,11},{20,21},{30,31}};
       printf(" second array \n");
    for (int i=0;i<3;i++){
        for (int j = 0; j < 2; j++) 
        {
             printf("%d ",a1[i][j]);
        }
        printf("\n");
        
    }
        printf("\n\n");

        
         // Check if multiplication is possible
    // if (cols1 != rows2) {
    //     printf("Multiplication not possible.\n");
    //     return;
    // }
        
        

      int a2[2][2];
       printf(" multiplication of  array is  \n");
    for (int i=0;i<2;i++){
        for (int j = 0; j < 2; j++)
        { a2[i][j]=0;
            for (int k=0;k<3;k++){
        a2[i][j]+=a[i][k]*a1[k][j]; }
             printf("%d ",a2[i][j]);
        }
        printf("\n");
        
    }
      
}
/*
#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Multiplication not possible.\n");
        return;
    }

    // Multiplying matrices
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    // Display the result
    printf("Resultant matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
*/