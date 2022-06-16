#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    char ciphertext;
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    } else
    {
        if(only_digits(argv[1]) == false)
    {
         printf("Usage: ./caesar key\n");
        return 1;
    } else {
        // printf("true\n");
        // printf("%s\n", argv[1]);
        // printf("%i\n", atoi(argv[1]));
        string plaintext = get_string("Plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, j = strlen(plaintext); i < j; i++)
        {
            // printf("%c", plaintext[i]);
            ciphertext = rotate(plaintext[i], atoi(argv[1]));
            printf("%c", ciphertext);
        }
        printf("\n");
    }

    }
}

bool only_digits(string s)
{
    int length = strlen(s);
    // printf("%i\n", length);
    if (isdigit(s[0])){
       return true;
    } else {
        return false;
    }
    // return false;
    // return true;
}

char rotate(char c, int n)
{
    // printf("%i", (int)c);
    // printf(" rotate %i", (int)n);
    int ciphertext;
    if(isalpha(c)){
        // printf("%i", (int)c);
        c = (int)c - 97;
        // printf("%i", (int)c);
        ciphertext = c + n;
        ciphertext = ciphertext + 97;
    } else {
        ciphertext = c;
    }

    // printf("%i", first);
    // printf("%c", (char)first);
    return ciphertext;
}