#include <stdio.h>

struct dialing_code {
  char* country;
  int code;
};

const struct dialing_code country_codes[] = {
  {"Argentina", 54}, {"Bangladesh", 880},
  {"Brazil", 55}, {"Burma", 95}
};

const size_t CODE_ARRAY_SIZE = sizeof(country_codes) / sizeof(struct dialing_code);

int main() {
  int code = -1;
  printf("Enter a dialing code: ");
  scanf(" %d", &code);
  if (code == -1) {
    printf("Invalid dialing code\n");
    return 0;
  }

  for (int i = 0; i < CODE_ARRAY_SIZE; i++) {
    if (country_codes[i].code == code) {
      printf("Country: %s\n", country_codes[i].country);
      return 0;
    }
  }

  printf("Country code not found\n");

  return 0;
}
