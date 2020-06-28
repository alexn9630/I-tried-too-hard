#include <stdio.h>
#include "rect.h"

int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("The area is: %lf\n",calcArea(a,b));
    printf("The perimeter is: %lf\n",calcPerimeter(a,b));
    printf("The surface area is: %lf\n",calcArea3D(a,b,c));
    int d = isSquare(a,b);
    if (d){
        printf("It is a square.\n");
    }
    else {
        printf("It is not a square.\n");
    }
    return 0;
}
