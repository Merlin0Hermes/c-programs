/*Takes numbers from user and outputs largest number*/
#include <stdio.h>

int main(void)
{
    int number, max;


    printf("Enter a number: ");
    scanf("%d", &number); 
    max = number; 

    while (number > 0)
    {
        printf("Enter a number: ");
        scanf("%d", &number);  

        if (number > max)
        {
            max = number;
        }
    }
    printf("Largest number: %d\n", max);
}