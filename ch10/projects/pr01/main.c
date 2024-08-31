#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 99

void stack_overflow();
void push(char ch);
char pop();
void improper();

char stack[STACK_SIZE];
int top = -1;

int main() {
  for (int i = 0; i < STACK_SIZE; i++)
    stack[i] = '0';

  printf("Enter parentheses and/or braces: ");

  char ch;
  while ((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{')
      push(ch);
    else if (ch == ')' || ch == '}') {
      char stack_top = pop();
      if (
          (ch == ')' && stack_top != '(')
          || (ch == '}' && stack_top != '{')
          ) {
        improper();
      }
    }
  }

  for (int i = 0; i < STACK_SIZE; i++) {
    if (stack[i] != '0')
      improper();
  }

  printf("Parentheses/braces are nested properly\n");

  return 0;
}

void stack_overflow() {
  printf("ERROR: stack overflow\n");
  exit(EXIT_FAILURE);
}

void push(char ch) {
  if (top + 1 >= STACK_SIZE)
    stack_overflow();
  else
    top++;

  stack[top] = ch;
}

char pop() {
  char result = stack[top];
  stack[top] = '0';
  if (top < 0)
    improper();
  else
    top--;

  return result;
}

void improper() {
  printf("Parentheses/braces are nested improperly\n");
  exit(EXIT_SUCCESS);
}
