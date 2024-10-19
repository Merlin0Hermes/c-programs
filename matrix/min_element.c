#include <stdio.h>
#define SIZE 10

int main(void)
{

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
