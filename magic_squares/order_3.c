#include <stdio.h>
#define SIZE 3

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


    for (n = col = 1; n <= 9; n++)
    {
        if (row < 0 && col > 2)
        {
            row += 2;
            col--;
        }
        else if (row < 0)
        {
            row = 2;
        }
        else if (col > 2)
        {
            col = 0;
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

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }

}