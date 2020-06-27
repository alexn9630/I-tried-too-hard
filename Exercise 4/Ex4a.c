#include <stdio.h>
#include <math.h>

int main(){
  int a, b, x, y;
  scanf("%d %d %d %d", &a, &b, &x, &y);
  int f=(a-b)*(x-y);
  printf("%d\n",f);
  return 0;
}
