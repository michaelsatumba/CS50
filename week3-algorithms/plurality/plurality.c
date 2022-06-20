#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    // Loops through the candidate_count and if candidate name matches the vote canditate name inputted by user add 1 vote to that candidate.
     for (int i = 0; i < candidate_count; i++)
    {
         if (strcmp(name, candidates[i].name) == 0){
        candidates[i].votes = candidates[i].votes + 1;
        // printf("%i\n", candidates[i].votes);
        return true;
    }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int largest = 0;
    // Loops through candidate_count
    for (int i = 0; i < candidate_count; i++)
    {
        // Prints out each candidate's vote total
        // printf("%i\n", candidates[i].votes);

        // If each candidate's vote total is larger than 0, make the variable "largest" equal that specific candidate's vote total.
        if(candidates[i].votes > largest) {
            largest = candidates[i].votes;
            // "largest" is now whatever the largest number compared to all the candidate's vote total.
            // If you print out the candidate's name here. You will just print out one name because the for loop just loops through each candidate once.
            //  printf("%s\n", candidates[i].name);
        }

    }

    // Loops through candidate_count again
    // for (int i = 0; i < candidate_count; i++)
    // {
    //     // If the candidate's vote total is equal to "largest". And largest is a number. Print out the name(s).
    //     if(candidates[i].votes == largest) {
    //         printf("%s\n", candidates[i].name);
    //     }
    // }
    return;
}