/*Finds determinant of a given matrix*/
#include <stdio.h>

void get_matrix(int matrix[10][10], int m, int n);

int main(void)
{
    int matrix[10][10];

    get_matrix(matrix, 10, 10);


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