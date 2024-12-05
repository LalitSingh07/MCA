#include <stdio.h>
#include <math.h>

int main() {
  float radius;
  float length;
  float breadth;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  printf("Enter the length of the rectangle: ");
  scanf("%f", &length);

  printf("Enter the breadth of the rectangle: ");
  scanf("%f", &breadth);

  float circle_area = M_PI * radius * radius;
  float rectangle_area = length * breadth;

  printf("The area of the circle is: %.2f\n", circle_area);
  printf("The area of the rectangle is: %.2f\n", rectangle_area);

  return 0;
}
