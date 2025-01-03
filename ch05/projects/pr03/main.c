#include <stdio.h>

int main() {
  float share_value;
  int share_num;

  printf("Enter share value: ");
  scanf("%f", &share_value);
  printf("Enter number of shares: ");
  scanf("%d", &share_num);

  int trade_value = share_value * share_num;

  float commission;

  if (trade_value < 2500.0f) {
    commission = 30.0f + .017f * trade_value;
  } else if (trade_value < 6250.0f) {
    commission = 56.0f + .0066f * trade_value;
  } else if (trade_value < 20000.0f) {
    commission = 76.0f + .0034f * trade_value;
  } else if (trade_value < 50000.0f) {
    commission = 100.0f + .0022f * trade_value;
  } else if (trade_value < 500000.0f) {
    commission = 155.0f + .0011f * trade_value;
  } else {
    commission = 255.0f + .0009f * trade_value;
  }

  if (commission < 39.0f) {
    commission = 39.0f;
  }
  
  printf("Commission of original broker: $%.2f\n", commission);

  if (share_num < 2000) {
    commission = 33.0f + 0.03f * share_num;
  } else {
    commission = 33.0f + 0.02f * share_num;
  }

  printf("Commission of competing broker: $%.2f\n", commission);

  return 0;
}
