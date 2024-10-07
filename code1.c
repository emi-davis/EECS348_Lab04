#include <stdio.h>
void findCombinations(int score) {
  printf("Score is %d", score);
}

int main() {
  int score;
  while (1) {
    printf("Enter 0 or 1 to STOP");
    printf("Enter the NFL score: ");
    scanf("%d", &score); // get user input and put in score variable

    if (score <= 1) {
      printf("Goodbye."); // exit if score given is 0 or 1
      break;
    }

    findCombinations(score);
    printf("\n");
  }
  return 0;
}