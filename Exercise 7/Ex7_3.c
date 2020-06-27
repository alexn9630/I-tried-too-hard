#include <stdio.h>
#include <string.h>

int main(){
    char o[3][5] = {
        {' ','#','#','#',' '},
        {'#',' ',' ',' ','#'},
        {' ','#','#','#',' '},
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<=5;j++){
            if(j==5){
                printf("\n");
            }
            else {
                printf("%c",o[i][j]);
            }
        }
    }
    for(int j=0;j<5;j++){
        for(int i=0;i<=3;i++){
            if(i==3){
                printf("\n");
            }
            else {
                printf("%c",o[i][j]);
            }
        }
    }
    return 0;
}
