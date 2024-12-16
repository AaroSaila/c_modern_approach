#include <stdbool.h>

#define SIZE 100

int stack[SIZE];
int *top_ptr = stack;

void make_empty() {
  top_ptr = &stack[0];
}

bool is_empty() {
  return top_ptr == &stack[0];
}

bool is_full() {
  return top_ptr == &stack[SIZE];
}
