#include "rect.h"
double calcArea(double a, double b){
    double area = a*b;
    return area;
}
double calcPerimeter(double a, double b){
    double perimeter = 2*(a+b);
    return perimeter;
}
int isSquare(double a, double b){
    int n;
    if(a==b){
        n=1;
    }
    else{
        n=0;
    }
    return n;
}
double calcArea3D(double a, double b, double c){
    double x = calcArea(a,b);
    double y = calcArea(b,c);
    double area3d = 4*x + 2*y;
    return area3d;
}
