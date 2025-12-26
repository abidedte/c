#include <stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d" ,&x);

    if(x<=10){
        printf("Good morning");
    }

    else{
        printf("Good day");
    }


    return 0;
}