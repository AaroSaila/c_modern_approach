#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool test_extension(const char *file_name, const char *extension) {
  char extension_lower[strlen(extension)];
  strcpy(extension_lower, extension);

  for (char *p = extension_lower; *p; p++) {
    *p = tolower(*p);
  }

  char *p_file_name = (char *)file_name + strlen(file_name);
  for (; p_file_name != file_name && *p_file_name != '.'; p_file_name--)
    ;
  if (*p_file_name != '.') {
    return false;
  }
  p_file_name++;

  char file_name_ext[10];
  int i = 0;
  for (; *p_file_name; p_file_name++, i++) {
    file_name_ext[i] = tolower(*p_file_name);
  }
  file_name_ext[i] = '\0';

  if (strcmp(extension_lower, file_name_ext) == 0) {
    return true;
  } else {
    return false;
  }
}

void test_function(const char filename[], const char extension[]) {
  printf("Filename: %s  Extension: %s\n", filename, extension);
  if (test_extension(filename, extension)) {
    printf("true\n");
  } else {
    printf("false\n");
  }
  putchar('\n');
}

int main() {
  test_function("abc.txt", "txt");
  test_function("abc.txt", "tXt");
  test_function("abc.txt", "TXT");
  test_function("abc.txt", "c");
  test_function("cfile.c", "c");
  test_function("cfile.c", "C");
  test_function("cfile.c", "Txt");
  test_function("cfile.c", "");

  return 0;
}
