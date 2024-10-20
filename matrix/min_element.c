#include <stdio.h>
#define SIZE 10

void get_matrix(int matrix[SIZE][SIZE], int m, int n);
int min_element(int matrix[SIZE][SIZE], int m, int n);

int main(void)
{
    int row, col, matrix[SIZE][SIZE], min;
    printf("Enter size of matrix (rows columns): ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix: \n");
    get_matrix(matrix, row, col);

    min = min_element(matrix, row, col);
    printf("Minimum element is : %d\n", min);

    return 0;
}

int min_element(int matrix[SIZE][SIZE], int m, int n)
{
    int i, j, min;
    min = matrix[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

void get_matrix(int matrix[SIZE][SIZE], int m, int n)
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
