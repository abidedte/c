#include <stdio.h>
int main(){
    typedef struct book{
        char name[50];
        int page;
        float price;
    }book;

    book b1;

    b1.page = 100;
    b1.price = 245.6;
    strcpy(b1.name, "Five point someone");

    printf("\nThe name of this book: %s",b1.name);
    printf("\nThe number of page: %d",b1.page);
    printf("\nThe price of this book: %.2f", b1.price);

    book b2;

    b2.page = 150;
    b2.price = 299.5;
    strcpy(b2.name, "Revolution 2020");

    printf("\n\nThe name of this book: %s",b2.name);
    printf("\nThe number of page: %d", b2.page);
    printf("\nThe price of this book: %.2f", b2.price);


    return 0;
}