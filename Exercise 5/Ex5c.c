#include <stdio.h>
int main(int day, int year, int month, int tag){
  printf("Insert days: ");
  scanf("%d", &day);
  year = day/365;
  month = (day%365)/30;
  tag = ((day%365)%30);
  printf("%d days is approximately %d years, %d months, %d days in a non-leap year.\n", day, year, month, tag);
  return 0;
}
