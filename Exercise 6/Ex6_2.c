#include <stdio.h>

void calculator(double x, double y, char operator){
    if (operator == '+'){
        printf("%lf", x+y);
    }
    else if (operator == '-'){
        printf("%lf", x-y);
    }
    else if (operator == '*'){
        printf("%lf", x*y);
    }
    else if (operator == '/'){
        printf("%lf", x/y);
    }
    return;
}

int main(double a, double b, char c){
    printf("Enter basic operation: ");
    scanf("%lf %c %lf", &a,&c,&b);
    calculator(a,b,c);
    return 0;
}
