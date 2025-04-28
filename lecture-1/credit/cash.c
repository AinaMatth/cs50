#include <cs50.h>
#include <stdio.h>
// Function prototypes
int get_change(void);
int calc_coins(int money);
int main(void) {
  int money = get_change();
  int coins = calc_coins(money);
  printf("%i\n", coins);
}
int get_change(void) {
  int cents;
  do {
    cents = get_int("Change owned (in cents): ");
    if (cents <= 0) {
      printf("Please enter a positive integer.\n");
    }

  } while (cents <= 0);
  return cents;
}
int calc_coins(int money) {
  const int coins[] = {25, 10, 5, 1};
  int num_coins = 0;

  for (int i = 0; i < 4; i++) {
    num_coins += money / coins[i];
    money %= coins[i];
  }

  return num_coins;
}
