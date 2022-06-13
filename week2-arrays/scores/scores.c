#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("How many scores? ");
    int sum = 0;
    int scores[x];
    double n;


  for (int i = 1; i < scores[x]; i++) {
    scores[i] = get_int("scores: ");
    sum = sum + scores[i];
    }

    printf("Sum: %i\n", sum);
    printf("x: %i\n", x);
    printf("Average: %f\n", n = (double)sum / (double)x);
}