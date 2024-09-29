#include <stdio.h>

int main(void)
{
    char *num_words[3] = {"first", "second", "third"};
    float amount, rate, payment;
    int i;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate = (rate / 100) / 12;

    for (i = 0; i < 3; i++)
    {
        amount += rate * amount;
        amount -= payment;
        printf("Balance remaining after %s payment: %.2f\n", num_words[i], amount);
    }

}