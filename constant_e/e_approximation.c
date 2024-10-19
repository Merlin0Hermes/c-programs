#include <stdio.h>

long factorial(long n);

int main(void)
{
    int num, i;
    double e = 1.0;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        e += 1.0 / factorial(i);

    }
    printf("e is %f\n", e);

}


long factorial(long n)
{    
    int i;
    long f = 1;

    if (n == 0)
    {
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}