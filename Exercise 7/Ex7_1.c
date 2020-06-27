#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isPalindrome (int n, char *string){
    int a=0;
    int b=n-1;
    for (int i=0;i<=(n/2);i++){
        if(i==(n/2)){
            printf("The string is Palindrome.\n");
        }
        else if(string[a+i]==string[b-i]){
            continue;
        }
        else{
            printf("The string is not Palindrome!\n");
            break;
        }
    }
    return;
}

int main(char *input){
    input = malloc(250*sizeof(char));
    printf("Enter a string here(Max 250 Char): ");
    scanf("%s",input);
    int n = strlen(input);
    isPalindrome(n, input);
    return 0;
}
