#include <stdio.h>
#include <cs50.h>
#include <string.h>



int main(void)
{

    string s = get_string("Input: ");
    printf("Output: ");

    for (int i = 0, j = strlen(s); i < j; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // int i = 0;
    // int j = strlen(s);
    // while (i < j)
    // {
    //     printf("%c", s[i]);
    //     i++;
    // }
    // printf("\n");


}

