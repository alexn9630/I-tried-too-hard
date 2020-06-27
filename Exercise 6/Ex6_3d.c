#include <stdio.h>
int main(int a){
    a = 1;
    for (int i=0; i<20; i++){
        printf("%d ",a);
        a = a*2;
    }
}
