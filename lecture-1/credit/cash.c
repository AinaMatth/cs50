#include <cs50.h>
#include <stdio.h>
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
    cents = get_int("Change owned: ");
  } while (cents <= 0);
  return cents;
}
int calc_coins(int money) {
  const int quarter = 25;
  const int dime = 10;
  const int nickel = 5;
  const int penny = 1;
  int coins = 0;
  coins += money / quarter;
  money %= quarter;
  coins += money / dime;
  money %= dime;
  coins += money / nickel;
  money %= nickel;
  coins += money / penny;
  money %= penny;
  return coins;
}
