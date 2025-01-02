#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = 0;

void stack_overflow() {
  printf("Expression is too complex.\n");
  exit(0);
}

void stack_underflow() {
  printf("Not enough operands in expression.\n");
  exit(0);
}

void push(int x) {
  if (top == STACK_SIZE) {
    stack_overflow();
  } else {
    stack[top] = x;
    top++;
  }
}

int pop() {
  if (top == 0) {
    stack_underflow();
    return '1';
  } else {
    return stack[--top];
  }
}

bool isOperator(char ch) {
  if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
    return true;
  } else {
    return false;
  }
}

int evaluate_RPN_expression(const char *expression) {
  for (char *p = (char *)expression; *p != '\0'; p++) {
    char ch = *p;

    if (ch >= '0' && ch <= '9') {
      push(ch - '0');
    } else if (isOperator(ch)) {
      int operand2 = pop();
      int operand1 = pop();
      switch (ch) {
      case '+':
        push(operand1 + operand2);
        break;
      case '-':
        push(operand1 - operand2);
        break;
      case '*':
        push(operand1 * operand2);
        break;
      case '/':
        push(operand1 / operand2);
        break;
      }
    } else if (ch == ' ') {
      continue;
    } else if (ch == '=') {
      return pop();
    }
  }

  exit(0);
}

int main() {
  char expression[1000];

  while (true) {
    printf("Enter an RPN expression: ");
    fgets(expression, 1000, stdin);
    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
  }

  return 0;
}
