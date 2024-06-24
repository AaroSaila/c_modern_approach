#include <stdio.h>

int main() {
  int quizzes[5][5] = {0};
  int quiz_lows[5];
  int quiz_highs[5];
  double quiz_averages[5];

  for (int i = 0; i < 5; i++) {
    int n1, n2, n3, n4, n5;
    printf("Enter quiz results for quiz #%d: ", i + 1);
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    int quiz[5] = {n1, n2, n3, n4, n5};
    quiz_lows[i] = quiz[i];
    quiz_highs[i] = quiz[i];
    int quiz_total = 0;

    for (int j = 0; j < 5; j++) {
      quizzes[i][j] = quiz[j];
      quiz_total += quiz[j];

      if (quiz[j] < quiz_lows[i]) {
        quiz_lows[i] = quiz[j];
      } else if (quiz[j] > quiz_highs[i]) {
        quiz_highs[i] = quiz[j];
      }
    }

    quiz_averages[i] = quiz_total / 5.0;
    
  }

  // Stats for quizzes
  for (int i = 0; i < 5; i++) {
    printf("Quiz #%d\n\n", i + 1);
    printf("Average Score: %.2lf\n", quiz_averages[i]);
    printf("Lowest Score: %d\n", quiz_lows[i]);
    printf("Highest Score: %d\n", quiz_highs[i]);
  }

  // Stats for students
  for (int j = 0; j < 5; j++) {

    printf("Student #%d\n", j + 1);

    int total = 0;
    for (int i = 0; i < 5; i++) {
      total += quizzes[i][j];
    }

    printf("\nTotal Score: %d\n", total);
    printf("Average Score: %.2lf\n\n", total / 5.0);
  }

  return 0;
}
