#include <stdio.h>

int main() {
  int quizzes[5][5] = {0};

  for (int i = 0; i < 5; i++) {
    int n1, n2, n3, n4, n5;
    printf("Enter quiz results for student %d: ", i + 1);
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    int quiz[5] = {n1, n2, n3, n4, n5};

    for (int j = 0; j < 5; j++) {
      quizzes[i][j] = quiz[j];
    }
    
  }
  return 0;
}
