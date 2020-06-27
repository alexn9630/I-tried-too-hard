#include <stdio.h>
#include <math.h>
int main(double x1, double x2, double y1, double y2){
  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  double distance = sqrt((pow((x2-x1),2.0))+(pow((y2-y1),2.0)));
  printf("%lf\n",distance);
  return 0;
}
