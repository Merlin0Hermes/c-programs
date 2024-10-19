/*Prints all the odd squared numbers between 1 and n*/
#include <stdio.h>

int main(void)
{
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i * i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i * i);            
        }

    }
}