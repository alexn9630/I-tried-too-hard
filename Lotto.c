#include <stdio.h>
#include <stdlib.h>;
int main(){
    printf("The 6 lottery numbers are: ");
    int *lottoNo = malloc(6*sizeof(int)); //creating an array to store the lotto number
    srand((unsigned) time(NULL));

    for(int i=0;i<6;i++){ //for loop until get 6 numbers
        lottoNo[i]= rand()%50; //random no assignment
        for(int j=0;j<i;j++){
            if (lottoNo[i]==lottoNo[j]||lottoNo[i]==0){
                i--;//this resets the i to the previous number until you get an unique lottoNo[i] that's not == 0
                break;
            }
            else {
                continue;
            }
        }
    }
     for(int i=0;i<6;i++){
        printf("%d ", lottoNo[i]);
    }
    printf("\n");
    return 0;
}
