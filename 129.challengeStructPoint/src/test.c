#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct sItem
{
  char * pItemName;
  int quantity;
  float price;
  float amount;
};

void readItem(struct sItem *item) {

  item->pItemName = (char*) malloc(30 * sizeof(char));

  if (!item->pItemName) exit(-1);

  printf("Please enter product name: \n");
  gets(item->pItemName);

  printf("Please enter the price: \n");
  scanf("%f", &item->price);

  printf("Please enter the quantity: \n");
  scanf("%d", &item->quantity);

  item->amount = item->price * item->quantity; 
}

void printItem(struct sItem *item) {
  printf("item name %s: \n", item->pItemName);
  printf("item quantity %d: \n", item->quantity);
  printf("item price %.2f: \n", item->price);
  printf("item name %.2f: \n", item->amount);
}

int main(int argc, char *argv[]) {
  struct sItem item1;
  readItem(&item1);
  printItem(&item1);
  
}
