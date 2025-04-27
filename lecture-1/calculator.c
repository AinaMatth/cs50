#include <cs50.h>
#include <math.h>
#include <stdio.h>
void x_square_equation(float a, float b, float c);
int main(void) {
  float a = get_float("What's x? ");
  float b = get_float("What's y? ");
  float c = get_float("What's z? ");
  printf("This is your equation: a=%f;b=%f;c=%f\n", a, b, c);
  x_square_equation(a, b, c);
}
void x_square_equation(float a, float b, float c) {
  float delta = b * b - 4 * a * c;
  float x1 = (-b - sqrt(delta)) / (2 * a);
  float x2 = (-b + sqrt(delta)) / (2 * a);
  float x3 = -b / (2 * a);
  if (delta > 0) {
    printf("Solutions:\nx1=%f\nx2=%f\n", x1, x2);
  } else if (delta == 0) {
    printf("Solution: %f\n", x3);
  } else {
    printf("No solution\n");
  }
}
