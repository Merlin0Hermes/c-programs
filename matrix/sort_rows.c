#include <stdio.h>
#define N 10

void bubble_sort(int array[N], int n);
void get_matrix(int matrix[N][N], int m, int n);
void print_matrix(int matrix[N][N], int m, int n);


int main(void)
{
    int matrix[N][N], m, n;
    m = n = 3;

    get_matrix(matrix, m, n);

    
}

void get_matrix(int matrix[N][N], int m, int n)
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

void print_matrix(int matrix[N][N], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
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

