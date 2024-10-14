#include <stdio.h>
#define SIZE 3

void print_matrix(int matrix[SIZE][SIZE]);

int main(void)
{

    int row, col, n, max, min;
    int matrix[SIZE][SIZE];

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            matrix[row][col] = 0;
        }
    }
    row = 0;
    max = SIZE - 1; min = 0;


    for (n = col = 1; n <= 9; n++)
    {
        if (row < 0 && col > 2)
        {
            row += 2;
            col--;
        }
        else if (row < 0)
        {
            row = max;
        }
        else if (col > 2)
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