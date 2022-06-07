#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number, first;
    number = get_long("Number: ");
    // printf("%i\n", number);
    // return number;

     first = number;

     while(first >= 10)
    {
        first = first / 10;
    }

    printf("First digit = %li\n", first);

    if (first == 5) {
        printf("mastercard\n");
    } else if (first == 3) {
        printf("american\n");
    } else {
        printf("visa\n");
    }

    // if (number > 999999999999999) {
    //     printf("mastercard\n");
    // } else if (number < 999999999999999 && number > 99999999999999) {
    //    printf("american\n");
    // } else {
    //    printf("visa\n");
    // }

    // if (n == 1) {
    //    return 2;
    // } else {
    //     printf("mastercard");
    // }
}