#include <stdio.h>
#define N 100

int main(void)
{
    int numbers[N], i, j, sum = 0;
    printf("Enter zero to terminate.\n");
    printf("Enter Numbers one by one. \n");

    for (i = 0; i < N; i++)
    {
        
        printf("Enter number: ");
        scanf("%d", &numbers[i]);

        if (numbers[i] == 0)
        {
            break;
        }
    }
    for (j = 0; j < i; j++)
    {
        sum += numbers[j];
    }
    printf("Sum is %d\n", sum);
}