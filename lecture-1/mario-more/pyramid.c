#include <cs50.h>
#include <stdio.h>
int get_positive_int(void);
void print_pyramid(int n);
int main(void) {
  int times = get_positive_int();
  print_pyramid(times);
}
// Get positive number
int get_positive_int(void) {
  int n;
  do {
    n = get_int("Number: ");
  } while (n < 1 || n > 8);
  return n;
}
void print_pyramid(int n) {
  // Outer loop
  for (int i = 1; i <= n; i++) {
    // Left pyramid
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (int k = 1; k <= i; k++) {
      printf("#");
    }
    // Middle space
    printf("  ");
    // Right pyramid
    for (int m = 1; m <= i; m++) {
      printf("#");
    }
    printf("\n");
  }
}
