#include <stdio.h>;
#include <stdlib.h>;

void MaxMin(int *arr, int n){
    int Max = arr[0];
    int Min = arr[0];
    for(int i=0;i<n;i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(Min > arr[i]){
            Min = arr[i];
        }
    }
    printf("The minimum in the array is %d\n", Min);
    printf("The maximum in the array is %d\n", Max);
    return;
}

void Sum(int *arr, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("The sum of the array is %d", sum);
    return;
}

int main(int *arr, int n){
    n = 25;
    arr = malloc(n*sizeof(int));
    srand((signed) time(NULL));
    printf("Array in correct order is:\n");
    for(int i=0;i<n;i++){
        arr[i]= rand()%500;
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printf("Array in reverse order is:\n");
    for(int i=(n-1);i>=0;i--){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    MaxMin(arr,n);
    Sum(arr, n);
    return 0;
}
