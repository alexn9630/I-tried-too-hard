#include <stdio.h>
int main(){
  char name[12];
  printf("Please insert Character name (Maximum 12 Characters): ");
  scanf("%12s", name);
  printf("Welcome %s\n", name);
  return 0;
}
