#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void accendArr(int n, int *arr){
    int temp; //initiate temp var for swapping later
    int *ptr_1 = arr; //initiate 2 pointers for comparison
    int *ptr_2 = arr;
    for(int i=0;i<n;i++){ //loop until last member
        for(int j=0;j<n-i;j++){ //2nd loop to run through the array to compare
            if(*ptr_1>*ptr_2){ //IMPORTANT!! you can see that it loops until j is smaller than n-i, this is done so it wouldn't cause mem leak later
                temp = *ptr_1;  //swapping if ptr1 is bigger than ptr2
                *ptr_1 = *ptr_2;
                *ptr_2 = temp;
            }
            ptr_2++;
        }
        ptr_2 -= n-i-1; //this resets the pointer to the next number, not to the first number otherwise the smallest number will be recycled
        ptr_1++;//NOTE: ptr_2 can cause mem leak if don't do the condition like above.
    }
    return;
}

int main(){
    int shuffled[10]; //Create an array, malloc does not work with sizeof for some reason
    srand((unsigned) time(NULL)); //Just make random number
    for(int i=0;i<10;i++){ //Assign the number and print it
        shuffled[i]=rand()%50;
        printf("Shuffled[%d] = %d\n",i,shuffled[i]);
    }
    printf("\n");
    int n = sizeof(shuffled)/sizeof(int); //Count the number of member (Kinda redundant)
    accendArr(n,shuffled); //Use the function
    for(int i=0;i<10;i++){
        printf("Sorted[%d] = %d\n",i,shuffled[i]); //Print
    }

}
