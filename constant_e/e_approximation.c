#include <stdio.h>

long factorial(long n);

int main(void)
{
    int num, i;
    double e = 1.0, epsilon, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter epsilon: ");
    scanf("%lf", &epsilon);

    for (i = 1; i <= num; i++)
    {
        temp = 1.0 / factorial(i);
        if (temp < epsilon)
        {
            break;       
        }
        e += temp;
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