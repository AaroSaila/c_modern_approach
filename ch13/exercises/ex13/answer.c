#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url) {
  strcpy(index_url, "http://www.");
  char *p_index = index_url + 11;

  for (char *p = (char*) domain; p < domain + strlen(domain); p++, p_index++) {
    *p_index = *p;
  }

  strcat(index_url, "/index.html");
}

int main() {
  char domain[] = "knking.com";
  char index_url[1000];

  build_index_url(domain, index_url);

  printf("Domain   : %s\n", domain);
  printf("Index URL: %s\n", index_url);

  return 0;
}
