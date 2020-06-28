#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum(int n, int *arr){
    int *ptr = arr;
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main(){
    int arr[50];
    for(int i=0;i<50;i++){
        arr[i]=rand()%50;
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum is = %d\n", sum(n,arr));
    return 0;
}
