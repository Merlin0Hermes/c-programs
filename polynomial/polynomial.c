#include <stdio.h>

int main(void)
{
    float x, poly;

    printf("Enter x: ");
    scanf("%f", &x);

    poly = 3 * (x * x * x * x * x) +
           2 * (x * x * x * x) - 
           5 * (x * x * x) -
           (x * x) + 7 * x - 6;

    printf("polynomial result of %.2f = %.2f\n", x, poly);
    return 0;


}