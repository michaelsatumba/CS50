#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompts user for string
    string name = get_string("Name: ");

    // prints string
    printf("hello, %s\n", name);
}