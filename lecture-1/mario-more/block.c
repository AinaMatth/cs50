#include <cs50.h>
#include <stdio.h>
int get_positive_int(void);
void build_pyramid(int n);
void print_hashes(int count);
void print_spaces(int count);
int main(void) {
  int times = get_positive_int();
  build_pyramid(times);
}
// Get positive number
int get_positive_int(void) {
  int n;
  do {
    n = get_int("Number: ");
  } while (n < 1 || n > 8);
  return n;
}
void build_pyramid(int n) {
  // Outer loop
  for (int i = 1; i <= n; i++) {
    // Left pyramid
    print_spaces(n - i);
    print_hashes(i);
    printf("\n");
  }
}
void print_spaces(int count) {
  for (int j = 1; j <= count; j++) {
    printf(" ");
  }
}
void print_hashes(int count) {
  for (int k = 1; k <= count; k++) {
    printf("");
  }
}
