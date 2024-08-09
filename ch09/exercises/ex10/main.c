#include <stdio.h>

int largest(int n, int a[n]) {
  int largest = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > largest)
      largest = a[i];
  }

  return largest;
}

double average(int n, int a[n]) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum / n;
}

int positives(int n, int a[n]) {
  int positives = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0)
      positives++;
  }

  return positives;
}

int main() {
  int a[14] = {
    -3, -2, -1, 0, 1, 2, 3, 4, 10, 5, 6, 7, 8 , 9
  };

  printf("Largest: %d\n", largest(14, a));
  printf("Average: %g\n", average(14, a));
  printf("Positives: %d\n", positives(14, a));

  return 0;
}
