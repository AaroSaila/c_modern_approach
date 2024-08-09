#include <stdio.h>

double median(double x, double y, double z) {
  double nums[3] = {x, y, z};

  for (int i = 0; i < 3; i++) {
    if (nums[i] < nums[0]) {
      double temp = nums[0];
      nums[0] = nums[i];
      nums[i] = temp;
    } else if (nums[i] > nums[2]) {
      double temp = nums[2];
      nums[2] = nums[i];
      nums[i] = temp;
    }
  }

  return nums[1];
}

int main() {
  double x, y, z;
  printf("Nums: ");
  scanf("%lf %lf %lf", &x, &y, &z);

  printf("Median: %g\n", median(x, y, z));

  return 0;
}
