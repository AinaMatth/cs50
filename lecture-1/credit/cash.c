// TODO: Check CS50 problem
#include <cs50.h>
#include <stdio.h>
int get_change(void);
int main(void) {
  int money = get_change();
  printf("The cashier own you: %i\n", money);
}
int get_change(void) {
  int cents;
  do {
    cents = get_int("Change owned in cents: ");
  } while (cents <= 0 || cents >= 100);
  return cents;
}
