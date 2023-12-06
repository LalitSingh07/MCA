#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  int enrolmentNumber;
  char name[50];
  char address[100];
  char city[50];
  char state[50];
};

void storeStudentData(struct Student student) {
  FILE *fp = fopen("studentData.txt", "a");
  if (fp == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  fprintf(fp, "%d\n", student.enrolmentNumber);
  fprintf(fp, "%s\n", student.name);
  fprintf(fp, "%s\n", student.address);
  fprintf(fp, "%s\n", student.city);
  fprintf(fp, "%s\n", student.state);

  fclose(fp);
}

void retrieveStudentData(int enrolmentNumber) {
  FILE *fp = fopen("studentData.txt", "r");
  if (fp == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  while (!feof(fp)) {
    int tempEnrolmentNumber;
    fscanf(fp, "%d\n", &tempEnrolmentNumber);
    if (tempEnrolmentNumber == enrolmentNumber) {
      char tempName[50], tempAddress[100], tempCity[50], tempState[50];
      fscanf(fp, "%s\n", tempName);
      fscanf(fp, "%s\n", tempAddress);
      fscanf(fp, "%s\n", tempCity);
      fscanf(fp, "%s\n", tempState);

      printf("Enrolment Number: %d\n", tempEnrolmentNumber);
      printf("Name: %s\n", tempName);
      printf("Address: %s\n", tempAddress);
      printf("City: %s\n", tempCity);
      printf("State: %s\n", tempState);

      break;
    }
  }

  fclose(fp);
}

int main() {
  int choice;
  do {
    printf("\n1. Store Student Data\n2. Retrieve Student Data\n3. Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        struct Student student;
        printf("\nEnter Enrolment Number: ");
        scanf("%d", &student.enrolmentNumber);

        printf("\nEnter Name: ");
        scanf("%s", student.name);

        printf("\nEnter Address: ");
        scanf("%s", student.address);

        printf("\nEnter City: ");
        scanf("%s", student.city);

        printf("\nEnter State: ");
        scanf("%s", student.state);

        storeStudentData(student);
        printf("\nStudent data stored successfully!\n");
        break;

      case 2:
        int enrolmentNumber;
        printf("\nEnter Enrolment Number to retrieve data: ");
        scanf("%d", &enrolmentNumber);

        retrieveStudentData(enrolmentNumber);
        break;

      case 3:
        printf("\nThank you for using the program!\n");
        break;

      default:
        printf("\nInvalid choice! Please enter a valid option.\n");
    }
  } while (choice != 3);

  return 0;
}
