#include <stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);

    if(n>0){
        printf("Your number is positive");
    }
    else if(n<0){
        printf("Your number is negative");
    }
    else{
        printf("Your number is zero");
    }

    return 0;
}