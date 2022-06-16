#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{

    string text = get_string("Text: ");
    int letters, words, sentences, index, indexRound;
    double L, S, indexDouble;
    letters = count_letters(text);
    words = count_words(text);
    sentences = count_sentences(text);

    L = letters / (float)words * 100;
    S = sentences / (float)words * 100;
    indexDouble = 0.0588 * L - 0.296 * S - 15.8;
    indexRound = round(indexDouble);
    // index = 0.0588 * L - 0.296 * S - 15.8;

    // printf("L: %0.2f\n", L);
    // printf("S: %0.2f\n", S);
    // printf("Grade: %f\n", indexDouble);
    // printf("Grade: %d\n", index);

    if (indexRound > 16)
    {
        printf("Grade: 16+\n");
    } else if (indexRound < 1)
    {
        printf("Before Grade 1\n");
    } else {
        printf("Grade: %d\n", indexRound);
    }




}

int count_letters(string text)
{
    int letters = 0;
     for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            // printf("Your input is alphabetical.\n");
            letters++;
        }
        else
        {
            // printf("Your input is not alphabetical.\n");
        }
    }
    // printf("%i letters\n", letters);
    return letters;
}

int count_words(string text)
{
    int words = 1;
     for (int i = 0;text[i] != '\0'; i++)
    {
     if (text[i] == ' ' && text[i+1] != ' ')
     {
        words++;
     }
    }
    // printf("%i words\n", words);
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
     for (int i = 0;text[i] != '\0'; i++)
    {
     if (text[i] == '.' || text[i] == '!' || text[i] == '?')
     {
        sentences++;
     }
    }
    // printf("%i sentences\n", sentences);
    return sentences;
}