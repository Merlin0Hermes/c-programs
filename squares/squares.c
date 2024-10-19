/*Prints all the squared numbers between 1 and n*/
#include <stdio.h>

int main(void)
{
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i * i <= num; i++)
    {
        printf("%d\n", i * i);
    }
}