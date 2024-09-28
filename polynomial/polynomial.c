#include <stdio.h>

int main(void)
{
    float x, poly;

    printf("Enter x: ");
    scanf("%f", &x);

    poly = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("polynomial result of %.2f = %.2f\n", x, poly);
    return 0;


}