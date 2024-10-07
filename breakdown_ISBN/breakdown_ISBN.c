#include <stdio.h>

int main(void)
{
    int prefix, group_identifer, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", 
        &prefix, &group_identifer, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifer: %d\n", group_identifer);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}