#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverseStr(char *arr){
    int n = strlen(arr);
    char *sptr = arr; //start pointer
    char *eptr = arr; //end pointer
    char temp; //temp for swapping
    for (int i=0;i<n-1;i++){ //NOTE: For some reason, i<n-1 is the end of the array for string
        eptr++; //navigate end pointer to the end of the array
    }
    for (int i=0;i<(n/2);i++){ //loop until half of the array
        temp = *eptr;  //swapping function
        *eptr = *sptr;
        *sptr = temp;
        sptr++;
        eptr--;
    }
}

int main(){
    char *str = malloc(250*sizeof(char));
    scanf("%s",str);
    reverseStr(str);
    printf("%s",str);

}
