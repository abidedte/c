#include <stdio.h>

void printAssalamualikum();

void printHello();

int main(){
    
    printf("Enter b for Bangladesh or Enter a for Amarica\n");
    char ch;
    scanf("%c", &ch);

    if(ch=='b'){
        printAssalamualikum();
    }
    else{
        printHello();
    }

    return 0;
}

void printAssalamualikum(){

    printf("Assalamualikum\n");
}

void printHello(){
    
    printf("Hello\n");
}