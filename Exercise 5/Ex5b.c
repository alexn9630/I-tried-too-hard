#include <stdio.h>
#include <math.h>

int main(float radius){
  long double pi = 3.14159265359L;
  printf("Insert radius (in cm): ");
  scanf("%f", &radius);
  long double perimeter = 2*radius*pi;
  long double area = pi*pow(radius, 2.0);
  printf("The perimeter of the circle is approximately %.2Lf cm\n", perimeter);
  printf("The area of the circle is approximately %.2Lf cm²\n", area);
  return 0;
}
