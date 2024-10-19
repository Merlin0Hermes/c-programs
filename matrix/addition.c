/*Adds two given matrices*/

#include <stdio.h>

void get_matrix(int matrix[10][10], int m, int n);


int main(void)
{
    int matrixA[10][10], matrixB[10][10];
    int matrix_sum[10][10];
    int i, j, m, n;

    printf("Enter number of rows and columns separated by space: ");
    scanf("%d %d", &m, &n);

    if (m > 10 || n > 10)
    {
        printf("Maximum rows or columns is 10.\n");
        return 1;
    }
    

    printf("Enter first matrix\n");
    get_matrix(matrixA, m, n);

    printf("Enter second matrix\n");
    get_matrix(matrixB, m, n);


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix_sum[i][j] = 0;
            matrix_sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix_sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void get_matrix(int matrix[10][10], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element of row %d column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

