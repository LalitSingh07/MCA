#include <stdio.h>
#include <math.h>

int main() {
  double x,a, b, c, result;
  printf("Enter enter the valuse of x ");
  scanf("%lf",&x);
  printf("Enter  a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  result = a * pow(x, 2) + b * x + c;
  printf("The result of ax2 + bx + c is %lf\n", result);

  return 0;
}