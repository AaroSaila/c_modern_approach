#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension) {
  char *p = (char*) file_name + strlen(file_name) - 1;
  char *p_ex = extension;

  for (; *p != '.' && p != file_name; p--);

  if (*p != '.') {
    *extension = '\0';
    return;
  }

  for (; *p != '\0'; p++, p_ex++) {
    *p_ex = *p;
  }
  *p_ex = '\0';

  return;
}

int main() {
  char buf[1000];
  char extension[1000];
  char ch;

  printf("Enter a filename: ");

  int i = 0;
  while ((ch = getchar()) != '\n') {
    buf[i] = ch;
    i++;
  }
  buf[i] = '\0';

  get_extension(buf, extension);

  printf("Extension       : %s\n", extension);
  
  return 0;
}
