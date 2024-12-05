#include <stdio.h>

int main() {
  int days, years, weeks, days_remaining, months;
  printf("Enter the number of days: ");
  scanf("%d", &days);
  years = days / 365;
  days_remaining = days % 365;
  months = days_remaining / 30;
  days_remaining = days_remaining % 30;
  weeks = days_remaining / 7;
  days_remaining = days_remaining % 7;


  printf("%d days is equivalent to %d years, %d months, %d weeks, and %d days.\n", days, years, months, weeks, days_remaining);

  return 0;
}
