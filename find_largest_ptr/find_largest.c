#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int nums[] = {1, 2, 3, 4};    
    int *ptr = find_largest(nums, sizeof(nums) / sizeof(int));

    printf("%d\n", *ptr);
}



int *find_largest(int a[], int n)
{
    int *max_ptr = a, *end = a + n;

    for (; a < end; a++) 
    {
        if (*a > *max_ptr)
            max_ptr = a;
    }
    return max_ptr; 
}
