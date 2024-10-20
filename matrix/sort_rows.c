#include <stdio.h>
#define N 10

void bubble_sort(int array[N], int n);
void get_matrix(int matrix[N][N], int row, int col);
void print_matrix(int matrix[N][N], int row, int col);


int main(void)
{
    int matrix[N][N], row, col, i;
    row = col = 3;

    get_matrix(matrix, row, col);

    for (i = 0; i < row; i++)
    {
        bubble_sort(matrix[i], col);
    }
    print_matrix(matrix, row, col);

    
}

void get_matrix(int matrix[N][N], int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element of row %d column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[N][N], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void bubble_sort(int array[N], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

        }

    }

}

