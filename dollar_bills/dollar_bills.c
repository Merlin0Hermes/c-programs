#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five, one;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount -= (twenty * 20);

    ten = amount / 10;
    amount -= (ten * 10);

    five = amount / 5;
    amount -= (five * 5);

    one = amount / 1;
    
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;

}