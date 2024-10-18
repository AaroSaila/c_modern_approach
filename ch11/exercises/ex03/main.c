#include <stdio.h>

void avg_sum(double a[], int n, double* avg, double* sum) {
  *sum = 0.0;
  for (int i = 0; i < n; i++) {
    *sum += a[i];
  }
  *avg = *sum / n;
}

int main() {
  double a[5] = {1, 2, 3, 4, 5};
  double avg;
  double sum;
  
  avg_sum(a, 5, &avg, &sum);

  printf("avg: %f\nsum: %f\n", avg, sum);
  return 0;
}
