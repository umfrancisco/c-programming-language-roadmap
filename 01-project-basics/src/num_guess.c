#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() {
  srand(time(NULL)); // start point to generate random numbers every time
  int random_number, user_number;

  random_number = rand() % 100;
  printf("random=%d\n", random_number);

  do {
    printf("\nGuess the number:\n");
    scanf("%d", &user_number);

    if (user_number < random_number) {
      printf("-> Greater than %d\n", user_number);
    }
    if (user_number > random_number) {
      printf("-> Less than %d\n", user_number);
    }
    if (user_number == random_number) {
      printf("SUCCESS!!\n");
    }

  } while (user_number != random_number);
}