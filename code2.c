#include <stdio.h>

void convertTemp(int temp, char scale, char target) { 
  float converted;

  switch (scale) { // switch statements for current scale (outside) and target scale (inside).
    case 'F':
      switch (target) {
        case 'C':
          converted = (temp - 32) * 5.0 / 9.0;
          break;
        case 'K':
          converted = (temp - 32) * 5.0 / 9.0 + 273.15;
          break;
        default:
          printf("Invalid target scale.\n");
          return;
      }
      break;

    case 'C':
      switch (target) {
        case 'F':
          converted = (temp * 9.0 / 5.0) + 32;
          break;
        case 'K':
          converted = temp + 273.15;
          break;
        default:
          printf("Invalid target scale.\n");
          return;
      }
      break;

    case 'K':
      switch (target) {
        case 'F':
          converted = (temp - 273.15) * 9.0 / 5.0 + 32;
          break;
        case 'C':
          converted = temp - 273.15;
          break;
        default:
          printf("Invalid target scale.\n");
          return;
      }
      break;

    default:
      printf("Invalid current scale.\n");
      return;
  }

  printf("Converted Temperature: %.2f %c\n", converted, target); // print temp with 2 decimal precision.

  if (target == 'C') { // tells user how to dress / what to do based on temp
    if (converted < 0) {
      printf("Freezing: Put on a coat.\n");
    }
    else if (converted <= 10) {
      printf("Chilly: Wear a jacket.\n");
    }
    else if (converted <= 25) {
      printf("Comfy: Wear whatever.\n");
    }
    else if (converted <= 35) {
      printf("Drink water.\n");
    }
    else {
      printf("Stay inside.\n");
    }
  }
  else if (target == 'F') {
    float tempC = (converted - 32) * 5.0 / 9.0;
    if (tempC < 0) {
      printf("Freezing: Put on a coat.\n");
    }
    else if (tempC <= 10) {
      printf("Chilly: Wear a jacket.\n");
    }
    else if (tempC <= 25) {
      printf("Comfy: Wear whatever.\n");
    }
    else if (tempC <= 35) {
      printf("Drink water.\n");
    }
    else {
      printf("Stay inside.\n");
    }
  }
  else if (target == 'K') {
    float tempC = converted - 273.15;
    if (tempC < 0) {
      printf("Freezing: Put on a coat.\n");
    }
    else if (tempC <= 10) {
      printf("Chilly: Wear a jacket.\n");
    }
    else if (tempC <= 25) {
      printf("Comfy: Wear whatever.\n");
    }
    else if (tempC <= 35) {
      printf("Drink water.\n");
    }
    else {
      printf("Stay inside.\n");
    }
  }
}

int main() {
  int temp;
  char scale;
  char target;

  printf("Enter a temperature: ");
  scanf("%d", &temp); // get user input and put in temp variable

  printf("Choose a current scale (F, C, K): ");
  scanf(" %c", &scale); // get user input and put in scale variable

  printf("Choose a target scale (F, C, K): ");
  scanf(" %c", &target); // get user input and put in target variable

  convertTemp(temp, scale, target); // Call the conversion function

  return 0;
}
