#include <stdio.h>

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