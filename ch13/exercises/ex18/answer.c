#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void remove_filename(char *url) {
  bool file_ext = false;
  for (char *p = url + strlen(url); p != url; p--) {
    if (*p == '.' && !file_ext) {
      file_ext = true;
    } else if (*p == '/' && file_ext) {
      *p = '\0';
      return;
    } else if (*p == '.' && file_ext) {
      return;
    }
  }
}

void test_function(char url[]) {
  char url_arr[strlen(url)];
  strcpy(url_arr, url);

  printf("URL             : %s\n", url_arr);
  remove_filename(url_arr);
  printf("Removed filename: %s\n\n", url_arr);
}

int main() {
  test_function("http://www.knking.com/index.html");
  test_function("http://www.knking.com/index");
  test_function("http://www.knking.com/index..c");
  test_function("http://www.knking.com/");
  return 0;
}
