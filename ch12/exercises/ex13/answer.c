#include <stdio.h>

#define N 10

int main() {
  double ident[N][N];

  int zeros_stored = N;
  for (double *p = &ident[0][0]; p <= &ident[N-1][N-1]; p++) {
    if (zeros_stored == N) {
      *p = 1.0;
      zeros_stored = 0;
    } else {
      *p = 0.0;
      zeros_stored++;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (ident[i][j] == 1.0) {
        printf("\033[0;32m");
        printf("%.1lf ", ident[i][j]);
        printf("\033[0m");
      } else {
        printf("%.1lf ", ident[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
