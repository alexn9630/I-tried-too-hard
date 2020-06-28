#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int count = 1;

struct Book{
    char title[100];
    char author[100];
    char genre[100];
    int uid;
};

struct Book *initializeBook(char *title, char *author, char *genre){

    struct Book *newBook = malloc(sizeof(struct Book));
    int uid;
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    strcpy(newBook->genre, genre);
    newBook->uid = count;
    count++;
    return newBook;
};

void printBookInfo(struct Book book){
    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book genre: %s\n", book.genre);
    printf("Book unique id: %d\n", book.uid);
}

int * main(){
    struct Book *Kingdom = initializeBook("The Kingdom", "Mary Jane", "Periodic Fiction");
    printBookInfo(*Kingdom);
    free(Kingdom);
}
