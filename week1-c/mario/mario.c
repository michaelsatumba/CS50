#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    do
    {
    height = get_int("Height:");
    }
    while(height < 1 || height > 8);


// loops through height value
//Height: 1
//#\n
//Height: 2
//#\n
//#\n
//  for (int row = 0; row < height; row++)
//  {
//    printf("#\n");
//  }

// nested loop
// Height: 1
//#\n
// Because column is equal to row which is "0" so it prints "#" once
// The for loop tries to execute again but now the column is "1" and that is more than  "0"
// The for loop ends
// Height: 2
//#\n
//##\n
// Because the nested for loop excutes
// for (int row = 0; row < height; row++)
//  {
//     for (int column = 0; column <= row; column++)
//       {
//           printf("#");
//       }
//       printf("\n");
//  }

// Dot
  for (int row = 0; row < height; row++)
    {
        for (int dot = height - 1; dot > row; dot--)
        {
          printf(" ");
        }
        for (int column = 0; column <= row; column++)
        {
          printf("#");
        }
      printf("\n");
    }


}