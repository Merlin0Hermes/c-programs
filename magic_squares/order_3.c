#include <stdio.h>
#define SIZE 3

int main(void)
{

    int i, j, n, max, min;
    int matrix[SIZE][SIZE];

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            matrix[i][j] = 0;
        }
    }
    i = 0;


    for (n = j = 1; n <= 9; n++)
    {
        if (i < 0 && j > 2)
        {
            i += 2;
            j--;

        }
        else if (i < 0)
        {
            i = 2;
        }
        else if (j > 2)
        {
            j = 0;
        }
        else if (matrix[i][j] != 0)
        {
            i += 2;
            j--;
        }
           
        matrix[i][j] = n;    
        j++;
        i--;
    
    


    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

}