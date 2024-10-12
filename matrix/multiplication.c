/*Multiplies two matrices*/
#include <stdio.h>

void get_matrix(int matrix[10][10], int m, int n);
void multiply(int matrixA[10][10], int matrixB[10][10], int result[10][10], 
                int first_row, int first_column, int second_row, int second_column);


int main(void)
{
    int matrixA[10][10], matrixB[10][10], result[10][10];
    int first_row, first_column, second_row, second_column;
    int i, j;

    printf("Enter number of rows and columns of first matrx (m n): ");
    scanf("%d %d", &first_row, &first_column);
    printf("Enter number of rows and columns of second matrx (m n): ");
    scanf("%d %d", &second_row, &second_column);

    if (first_row > 10 || first_column > 10 || second_column > 10 || first_row > 10)
    {
        printf("Maximum size of row or column is 10.\n");
        return 1;
    }



    if (first_column != second_row)
    {
        printf("Cannot multiply: ");
        printf("Number of columns first matrix is not equal to number of rows of second matrix.\n");
        return 1;
    }


    printf("Enter first matrix: \n");
    get_matrix(matrixA, first_row, first_column);

    printf("Enter second matrix: \n");
    get_matrix(matrixB, second_row, second_column);

    multiply(matrixA, matrixB, result, first_row, first_column, second_row, first_column);

    for (i = 0; i < first_row; i++)
    {
        for (j = 0; j < second_column; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    



}

void multiply(int matrixA[10][10], int matrixB[10][10], int result[10][10],
             int first_row, int first_column, int second_row, int second_column)
{
    int i, j, k;

    for (i = 0; i < first_row; i++)
    {
        for (j = 0; j < second_column; j++)
        {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < first_row; i++)
    {
        for (j = 0; j < second_column; j++)
        {
            for (k = 0; k < first_column; k++)
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

