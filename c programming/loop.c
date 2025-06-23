#include<stdio.h>
int main()
{
    int rowSize, colSize;
    printf("Enter row and column size of matrix : ");
    scanf("%d", &rowSize, &colSize);
    int matrix1[rowSize][colSize], matrix2[rowSize][colSize];
    printf("Enter 1st elements :\n ");
    scanf("%d", &matrix1);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", matrix1[i][j]);
        }
    }
    printf("Enetr 2nd elements : \n");
    scanf("%d", &matrix2);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // logic to perform addition of two matrix
    for(int i=0; i<rowSize; i++)
    {
    for(int j=0; j<colSize; j++)
    {
        int sum = matrix1[i][j] + matrix2[i][j];
        printf("%d ", sum);
    }
    printf("\n ");
    }
    return 0;
}