#include <stdio.h>
int main(){
    long int a = 1L;
    long int b = 1L;
    long int c;
    printf("%ld\n%ld\n", a, b);
    for (int i=0;i<48;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%ld\n",c);
    }
    return 0;
}
