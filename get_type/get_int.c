#include <stdio.h>

int get_int(char *message)
{
    int num, read;
    do
    {
        printf("%s", message);
        read = scanf(" %d", &num);
        while (getchar() != '\n');
        
    } while (read != 1);
    return num;
}

int main(void)
{
    int i;
    i = get_int("Enter a number: ");
    printf("%d\n", i);

}