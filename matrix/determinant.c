/*Finds determinant of a given matrix*/
/*Work in progress*/
#include <stdio.h>

void get_matrix(int matrix[10][10], int n);
int determinant(int matrix[10][10], int n);


int main(void)
{
    int matrix[10][10];
    int n;

    printf("Enter size of matrix n :");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Maximum size is 10: ");
    }

    get_matrix(matrix, 10);


}

int determinant(int matrix[10][10], int n)
{

}

void get_matrix(int matrix[10][10], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element of row %d column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}