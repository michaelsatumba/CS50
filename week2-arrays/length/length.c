#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int string_length(string name);

int main(void)
{

    string name = get_string("Name: ");
    // int length = string_length(name);
    int length = strlen(name);


    // for (int i = 0; i <= name[length]; i++) {
    //     length++;
    // }

    // while (name[length] != '\0'){
    //     length++;
    // }

    printf("%i\n", length);
}

// int string_length(string name)
// {
//     int j = 0;
//       for (int i = 0; i <= name[j]; i++)
//     {
//         j++;
//     }
//     return j;

//     // int i = 0;
//     // while (name[i] != '\0')
//     // {
//     //     i++;
//     // }
//     // return i;
// }