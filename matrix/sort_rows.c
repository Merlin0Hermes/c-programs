#include <stdio.h>
#define N 10

void bubble_sort(int array[N], int n);
void get_matrix(int matrix[10][10], int m, int n);


int main(void)
{
    int matrix[N][N];

    
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

