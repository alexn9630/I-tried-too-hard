#include <stdio.h>
int main(){
  float ratePer;
  printf("Please enter rate (in Percentage): ");
  scanf("%f", &ratePer);
  float rate = ratePer/100;
  float sale;
  float cost;
  printf("Please enter the sale price: ");
  scanf("%f", &sale);
  printf("Please enter the costs: ");
  scanf("%f", &cost);
  float commission = rate*(sale-cost);
  printf("The commission is %.2f EUR\n", commission);
  return 0;
}
