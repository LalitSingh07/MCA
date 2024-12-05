#include <stdio.h>
#include <math.h>

int main() {
  float principal, rate, time;
  printf("Enter the principal amount: ");
  scanf("%f", &principal);
  printf("Enter the rate of interest: ");
  scanf("%f", &rate);
  printf("Enter the time in years: ");
  scanf("%f", &time);

  float simple_interest_amount = (principal * rate * time) / 100.0;
  float compound_interest_amount = principal * (pow((1 + rate / 100.0), time));

  printf("Simple interest: %f\n", simple_interest_amount);
  printf("Compound interest: %f\n", compound_interest_amount);

  return 0;
}
