#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]) {
  int i = 0;
  int j = n / 2;
  
  int num = 2;
  int n_i = n - 1;

  magic_square[i][j] = 1;

  while (1) {
    int prev_i = i;
    int prev_j = j;

    if (i == 0)
      i = n_i;
    else
      i--;

    if (j == n_i)
      j = 0;
    else
      j++;

    if (magic_square[i][j] != 0) {
      i = prev_i + 1;
      j = prev_j;
      magic_square[i][j] = num;
    }
    else
      magic_square[i][j] = num;
    
    num++;

    if (num > n * n)
      break;
  }
}

void print_magic_square(int n, int magic_square[n][n]) {
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d ", magic_square[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");

  scanf("%d", &n);

  if (
      n < 1
      || n > 99
      || n % 2 == 0
      ) {
    printf("Invalid input!\n");
    return 1;
  }

  int array[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      array[i][j] = 0;
    }
  }

  create_magic_square(n, array);
  print_magic_square(n, array);

  return 0;
}
