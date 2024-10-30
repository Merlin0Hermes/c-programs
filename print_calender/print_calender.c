#include <stdio.h>

int main(void)
{
    int days, starting_day, i, weekday = 0;
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for(i = 0; i < starting_day; i++)
    {
        printf("   ");
    }

    weekday = starting_day;
    for (i = 1; i <= days; i++)
    {
        printf("%3d", i);
        weekday++;
        if (weekday == 7)
        {
            printf("\n");
            weekday = 0;
        }
    }
    printf("\n");
}