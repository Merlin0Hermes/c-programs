#include <stdio.h>
#define SIZE 9 

void print_matrix(int matrix[SIZE][SIZE]);
void set_zero_matrix(int matrix[SIZE][SIZE]);

int main(void)
{

    int row, col, n, max, min, mid;
    int matrix[SIZE][SIZE];

    set_zero_matrix(matrix);
    
    row = 0;
    max = SIZE - 1; min = 0;
    mid = SIZE / 2;

    col = mid;
    for (n = 1; n <= SIZE * SIZE; n++)
    {
        if (row < min && col > max)
        {
            row += 2;
            col--;
        }
        else if (row < min)
        {
            row = max;
        }
        else if (col > max)
        {
            col = min;
        }
        else if (matrix[row][col] != 0)
        {
            row += 2;
            col--;
        }
           
        matrix[row][col] = n;    
        col++;
        row--;
    
    }
    print_matrix(matrix);

}


void print_matrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void set_zero_matrix(int matrix[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            matrix[i][j] = 0;
        }
    }
}
