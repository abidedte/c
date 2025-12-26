#include <stdio.h>
int main(){
    char ch;
    printf("Enter your wish: ");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("digit");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("lower letter");
    }
    else{
        printf("invalid something");
    }
    return 0;
}