#include <stdio.h>

int main() {

  float basic_salary;
  printf("Enter the basic salary: ");
  scanf("%f", &basic_salary);

  float hra = basic_salary * 0.03;
  float ta = basic_salary * 0.05;
  float da = basic_salary * 0.03;


  float total_salary = basic_salary + hra + ta + da;

  printf("Total salary: %f\n", total_salary);

  return 0;
}
