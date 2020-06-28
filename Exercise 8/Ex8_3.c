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
void reverseStr(int n, char *arr){
    char *sptr = arr;
    char *eptr = arr;
    char temp;
    for (int i=0;i<n-1;i++){
        eptr++;
    }
    for (int i=0;i<(n/2);i++){
        temp = *eptr;
        *eptr = *sptr;
        *sptr = temp;
        sptr++;
        eptr--;
    }
}
int main(){
    int arr[] = {5,25,64,11,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", sum(n,arr));
    char *str = malloc(250*sizeof(char));
    scanf("%s",str);
    int m = strlen(str);
    reverseStr(m,str);
    printf("%s",str);

}
