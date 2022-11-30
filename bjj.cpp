#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
// assign the max amount of character for each input, in this case 20. 
  char color[20];
  char move[20];
  char name[20];

  // Asking the user for input.
  printf("Belt color: ");
  scanf("%s", color);
  printf("Favorite move: ");
  scanf("%s", move);
  printf("favorite grappler: ");
  scanf("%s", name);
  
  // the %s is used to pull the user's input, you should specify the name of the iput you want to import at the end of the sentance.
  printf("I am a %s belt in BJJ\n", color);
  printf("%s is my favorite submission\n", move);
  printf("%s is my favorite grappler\n", name);
}