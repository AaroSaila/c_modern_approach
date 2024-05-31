#include <stdio.h>
#include <stdbool.h>

int main() {
  bool teenager;
  int age;

  age = 12;
  teenager = (age >= 13) && (age <= 19) ? true : false;
  printf("Age: %d\n", age);
  printf("Teenager: %s\n\n", teenager ? "true" : "false");

  age = 13;
  teenager = (age >= 13) && (age <= 19) ? true : false;
  printf("Age: %d\n", age);
  printf("Teenager: %s\n\n", teenager ? "true" : "false");

  age = 15;
  teenager = (age >= 13) && (age <= 19) ? true : false;
  printf("Age: %d\n", age);
  printf("Teenager: %s\n\n", teenager ? "true" : "false");

  age = 19;
  teenager = (age >= 13) && (age <= 19) ? true : false;
  printf("Age: %d\n", age);
  printf("Teenager: %s\n\n", teenager ? "true" : "false");

  age = 25;
  teenager = (age >= 13) && (age <= 19) ? true : false;
  printf("Age: %d\n", age);
  printf("Teenager: %s\n\n", teenager ? "true" : "false");

  return 0;
}
