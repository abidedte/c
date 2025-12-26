#include <stdio.h>
int main(){
    char ch;
    printf("Enter any letter:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("The letter is Capital");
    }
    else if(ch>='a' && ch<='z'){
        printf("The letter is small");
    }
    else{
        printf("This is not any letter ");
    }


    return 0;
}