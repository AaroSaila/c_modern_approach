#include <stdio.h>

int gcd(int m, int n) {
  if (n == 0)
    return m;

  return gcd(n, m % n);
}

int main() {
  int m, n;
  printf("Integers: ");
  scanf("%d %d", &m, &n);

  printf("GCD: %d\n", gcd(m, n));

  return 0;
}
