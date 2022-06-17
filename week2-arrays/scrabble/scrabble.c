#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

// int main(int argc, string argv[])
// {
//     if (argc != 3)
//     {
//         printf("Missing Command Line Arguments\n");
//         return 1;
//     }
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    // string word1 = argv[1];
    // string word2 = argv[2];

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2) {
    printf("Player 1, wins!\n");
    } else if ( score1 < score2) {
    printf("Player 2, wins!\n");
    } else if ( score1 == score2) {
    printf("Tie!\n");
    } else {
        printf("No one wins!\n");
    }



}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    // Print String
    // printf("%s\n", word);

    // Print the intergers of the characters of the string
    // printf("%i %i %i\n", word[0], word[1], word[3]);



    // Print how many charcters in the string using strlen
    // int length = strlen(word);
    // printf("%i\n", length);

    // Print characters of string
    // for (int i = 0, j = strlen(word); i < j; i++)
    // {
    //     printf("%c", word[i]);
    // }
    // printf("\n");


    // Loop through each character and if it is uppercased print the lowercase version
    // for (int i = 0, n = strlen(word); i < n; i++)
    // {
    //     if(isupper(word[i])){
    //         printf("%c", tolower(word[i]));
    //     } else {
    //         printf("%c", word[i]);
    //     }
    // }
    // printf("\n");

    // Print each character
    // for (int i = 0, n = strlen(word); i < n; i++){
    //     printf("%c", word[i]);
    // }
    // printf("\n");

    // Loop through Points Array
    // for (int i = 0; i < 26; i++){
    //     printf("%u", POINTS[i]);
    // }
    // printf("\n");
    int sum = 0;
     for (int i = 0, n = strlen(word); i < n; i++){
        if (isupper(word[i])) {
            // Minus 65 because 65 is ASCII for A
            // A would equal 0
            int num = 0;
            num = word[i] - 65;
            // Prints each number from array of characters
            // printf("%i", POINTS[num]);

            sum += POINTS[num];
            // printf("sum %i", sum);
        } else if (islower(word[i])) {
            // Minus 97 because 97 is ASCII for a
            int num = 0;
            num = word[i] - 97;
            // printf("%i", POINTS[num]);

            sum += POINTS[num];
            // printf("sum %i", sum);
        } else {
            word[i] = 0;
            // printf("%i", word[i]);
        }
    }
    printf("\n");

    return sum;
}
