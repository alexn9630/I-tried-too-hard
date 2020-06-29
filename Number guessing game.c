#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number;
    int attempt;
    int check = 0;
    int count = 1;
    int wrong = 1;
    srand((unsigned) time(NULL));
    while (!number){
        number = rand() % 5;
    }
    printf("I'm thinking of a number between 1-5, have a guess: ");
    while (!check){
        scanf("%d",&attempt);
        if (attempt != 1&&attempt != 2&&attempt != 3&&attempt != 4&&attempt != 5&&wrong==5){
            printf("Fine. Be like that then.\n");
            break;
        }
        else if (attempt != 1&&attempt != 2&&attempt != 3&&attempt != 4&&attempt != 5&&wrong==4){
            printf("Ok, I'm getting mad. Try again: ");
            wrong++;
            continue;
        }
        else if (attempt != 1&&attempt != 2&&attempt != 3&&attempt != 4&&attempt != 5&&wrong==3){
            printf("You are fucking with me aren't you? Try again: ");
            wrong++;
            continue;
        }
        else if (attempt != 1&&attempt != 2&&attempt != 3&&attempt != 4&&attempt != 5){
            printf("Wrong input, maybe read the instruction next time, try again: ");
            wrong++;
            continue;
        }
        else if (attempt != number&&count == 5){
            printf("Yeah, dont bother.\n");
            break;
        }
        else if (attempt == number&&count == 5){
            printf("Only took you 5 attempts, LOL.");
            check = 1;
        }
        else if (attempt == number&&count == 1){
            printf("First try! Dayum son! You are not getting anything tho.\n");
            check = 1;
        }
        else if (attempt == number){
            printf("Wao, you got it right! Congrats! Only %d took tries.\nYou are not getting anything tho.\n",count);
            check = 1;
        }
        else{
            printf("Sykes, that's the wrong number! Try again: ");
            count++;
        }
    }
    return 0;
}
