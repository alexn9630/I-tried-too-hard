#include <stdio.h>
int main(int height, int width){
  printf("Insert height (in cm): ");
  scanf("%d", &height);
  printf("Insert width (in cm): ");
  scanf("%d", &width);
  int perimeter = 2*(height + width);
  int area = height * width;
  printf("The perimeter of the rectangle is %d cm\n", perimeter);
  printf("The area of the rectangle is %d cm²\n", area);
  return 0;
}
