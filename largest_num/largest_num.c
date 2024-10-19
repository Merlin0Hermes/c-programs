/*Takes numbers from user and outputs largest number*/
#include <stdio.h>

int main(void)
{
    float number, max;


    printf("Enter a number: ");
    scanf("%f", &number); 
    max = number; 

    while (number > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &number);  

        if (number > max)
        {
            max = number;
        }
    }
    printf("Largest number: %.2f\n", max);
}