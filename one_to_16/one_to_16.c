#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, b1, b2, b3, b4;
    int c1, c2, c3, c4, d1, d2, d3, d4;

    int row1_sum, row2_sum, row3_sum, row4_sum;
    int column1_sum, column2_sum, column3_sum, column4_sum;
    int diagonal_sum1, diagonal_sum2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4);

        row1_sum = a1 + a2 + a3 + a4;
        row2_sum = b1 + b2 + b3 + b4;
        row3_sum = c1 + c2 + c3 + c4;
        row4_sum = d1 + d2 + d3 + d4;

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
            a1, a2, a3, a4,
            b1, b2, b3, b4,
            c1, c2, c3, c4,
            d1, d2, d3, d4);

    
}