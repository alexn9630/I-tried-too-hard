#include <stdio.h>
int main(float price, int quantity){
  printf("Insert the price of the item and the quantity, separated by a space: ");
  scanf("%f %d", &price, &quantity);
  float TotalRevenue = price * quantity;
  printf("Total revenue is: %.2f\n",TotalRevenue);
  return 0;
}
