#include <stdio.h>

int main(void)
{
    float amount, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate = (rate / 100) / 12;

    amount += rate * amount;
    amount -= payment;
    printf("Balance remaining after first payment: %.2f\n", amount);

    amount += rate * amount;
    amount -= payment;
    printf("Balance remaining after second payment: %.2f\n", amount);

    amount += rate * amount;
    amount -= payment;
    printf("Balance remaining after third payment: %.2f\n", amount);
}