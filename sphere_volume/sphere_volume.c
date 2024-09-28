#include <stdio.h>
#define PI 3.14159


int main(void)
{
    float radius = 0.0f, volume = 0.0f;

    printf("Enter radius in metres: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    printf("Volume of sphere with radius %.2f metre is %.2f metre\n", radius, volume);
    return 0;


}