#include <stdio.h>

void findCombinations(int score) {
  int tdpc, tdfg, td, fg, safe;
  // loop through each way to score
  for (tdpc = 0; tdpc * 8 <= score; tdpc++) { // 8pt
    for (tdfg = 0; tdfg * 7 <= score; tdfg++) { // 7pt
      for (td = 0; td * 6 <= score; td++) { // 6pt
        for (fg = 0; fg * 3 <= score; fg++) { // 3pt
          for (safe = 0; safe * 2 <= score; safe++) { // 2pt
            if (tdpc * 8 + tdfg * 7 + td * 6 + fg * 3 + safe * 2 == score) { // if the total from the current loop is valid, print it
              printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", tdpc, tdfg, td, fg, safe);
            }
          }
        }
      }
    }
  }
}

int main()
{
  int score;
  while (1) {
    printf("Enter 0 or 1 to STOP\n");
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