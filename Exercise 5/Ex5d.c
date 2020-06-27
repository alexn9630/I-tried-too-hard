#include <stdio.h>
int main(int a, int b, int c){
  printf("Insert a: ");
  scanf("%d", &a);
  printf("Insert b: ");
  scanf("%d", &b);
  printf("Insert c: ");
  scanf("%d", &c);
  int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
  printf("The maximum is %d.\n", max);
  return 0;
}
