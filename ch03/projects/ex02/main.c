#include <stdio.h>

int main() {
  int item_number;
  float unit_price;
  int month, day, year;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  if (unit_price > 9999.99f) {
    printf("ERROR: Price can't be above 9999.99.\n");
    return 1;
  }
  printf("Enter purchase date: (mm/dd/yyyy): ");
  scanf("%d / %d / %d", &month, &day, &year);
  printf("\n");

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-7d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_number, unit_price, month, day, year);

  return 0;
}
