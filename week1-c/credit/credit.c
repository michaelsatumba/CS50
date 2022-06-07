#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number, first, test;
    int count = 0;
    test = number = get_long("Number: ");

     while(number != 0)
   {
       number = number / 10;
       count++;
   }
   printf("The number of digits in an integer is : %d\n", count);

    first = test;

     while(first >= 10)
    {
        first = first / 10;
    }

    printf("First digit = %li\n", first);

       if (count == 16 && first == 5) {
        printf("MASTERCARD\n");
    } else if (count == 15 && first == 3) {
        printf("AMEX\n");
    } else if ((count == 13 || count == 16) && first == 4) {
        printf("VISA\n");
    } else {
        printf("Invalid\n");
    }
    
}