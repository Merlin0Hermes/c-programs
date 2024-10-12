/*Multiplies two matrices*/
#include <stdio.h>

void get_matrix(int matrix[10][10], int m, int n);

int main(void)
{
    int matrixA[10][10], matrixB[10][10];
    int m1, n1, m2, n2;


    if (m1 > 10 || n1 > 10 || n2 > 10 || m1 > 10)
    {
        printf("Maximum size of row or column is 10.\n");
        return 1;
    }

    printf("Enter number of rows and columns of first matrx (m n): ");
    scanf("%d %d", m1, n1);
    printf("Enter number of rows and columns of second matrx (m n): ");
    scanf("%d %d", m2, n2);

    if (n1 != m2)
    {
        printf("Cannot multiply: ");
        printf("Number of columns first matrix is not equal to number of rows of second matrix.\n");
        return 1;
    }


    printf("Enter first matrix: ");
    get_matrix(matrixA, m1, n2);

    printf("Enter second matrix: ");
    get_matrix(matrixB, m2, n2);



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

