#include <stdio.h>
#define SIZE 10

void get_matrix(int matrix[SIZE][SIZE], int m, int n);
void min_element(int matrix[SIZE][SIZE], int m, int n);

int main(void)
{
    int row, col;
    printf("Enter size of matrix (rows columns): ");
    scanf("%d %d", &row, &col);


}

void min_element(int matrix[SIZE][SIZE], int m, int n)
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
