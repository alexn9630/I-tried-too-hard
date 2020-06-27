#include <stdio.h>

void printSeason(int month){
    switch(month){
        case 12:
        case 1:
        case 2:
            puts("winter");
            break;

        case 3:
        case 4:
        case 5:
            puts("spring");
            break;

        case 9:
        case 10:
        case 11:
            puts("autumn");
            break;

        default:
            puts("unknown month");
    }
}

int main(int month){
    printf("Insert month in integer: ");
    scanf("%d", &month);
    printSeason(month);
    return 0;
}

