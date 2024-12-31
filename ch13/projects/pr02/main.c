#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);
void read_until_space(char str[], int n);
void empty_input_buffer();

int main() {
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[3];
  char month_str[3];
  char time_str[6];
  char day_and_time_str[11];
  char msg_str[MSG_LEN + 1];
  int day;
  int month;
  int i, j;
  int num_remind = 0;

  printf("Format: MONTH/DAY HR:MIN REMINDER\n\n");
  while (1) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day, time, and reminder: ");
    scanf("%2d/%2d", &month, &day);
    if (day == 0 || month == 0) {
      break;
    } else if (day < 0 || day > 31 || month < 0 || month > 12) {
      printf("Invalid day or month\n");
      continue;
    }

    getchar();
    read_until_space(time_str, sizeof(time_str));
    sprintf(day_str, "%2d", day);
    sprintf(month_str, "%2d", month);
    strcpy(day_and_time_str, month_str);
    strcat(day_and_time_str, "/");
    strcat(day_and_time_str, day_str);
    strcat(day_and_time_str, " ");
    strcat(day_and_time_str, time_str);

    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++) {
      if (strcmp(day_and_time_str, reminders[i]) < 0) {
        break;
      }
    }

    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j-1]);
    }

    strcpy(reminders[i], day_and_time_str);
    strcat(reminders[i], " ");
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }

  return 0;
}

int read_line(char str[], int n) {
  char ch;
  int i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i] = ch;
      i++;
    }
  }

  str[i] = '\0';
  return i;
}

void read_until_space(char str[], int n) {
  char ch;
  int i = 0;
  while ((ch = getchar()) != ' ') {
    if (i < n) {
      str[i] = ch;
      i++;
    }
  }
  str[i] = '\0';
}

void empty_input_buffer() {
  char ch;
  while ((ch = getchar()) != '\n')
    ;
}
