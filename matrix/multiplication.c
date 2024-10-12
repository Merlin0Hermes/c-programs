/*Multiplies two matrices*/
#include <stdio.h>

void get_matrix(int matrix[10][10], int m, int n);
void multiply(int matrixA[10][10], int matrixB[10][10], int result[10][10], int m1, int n1, int m2, int n2);


int main(void)
{
    int matrixA[10][10], matrixB[10][10], result[10][10];
    int m1, n1, m2, n2;
    int i, j;

    printf("Enter number of rows and columns of first matrx (m n): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter number of rows and columns of second matrx (m n): ");
    scanf("%d %d", &m2, &n2);

    if (m1 > 10 || n1 > 10 || n2 > 10 || m1 > 10)
    {
        printf("Maximum size of row or column is 10.\n");
        return 1;
    }



    if (n1 != m2)
    {
        printf("Cannot multiply: ");
        printf("Number of columns first matrix is not equal to number of rows of second matrix.\n");
        return 1;
    }


    printf("Enter first matrix: \n");
    get_matrix(matrixA, m1, n2);

    printf("Enter second matrix: \n");
    get_matrix(matrixB, m2, n2);

    multiply(matrixA, matrixB, result, m1, n1, m2, n1);

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    



}

void multiply(int matrixA[10][10], int matrixB[10][10], int result[10][10], int m1, int n1, int m2, int n2)
{
    int i, j, k;

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            for (k = 0; k < n1; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];

            }

        }
        printf("\n");
    }

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

