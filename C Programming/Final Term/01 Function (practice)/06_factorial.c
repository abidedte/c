#include <stdio.h>

int factorial();

int main(){
    int x;
    printf("Input a number: ");
    scanf("%d",&x);

    int f = factorial(x);

    printf("The factorial is: %d", f);

    return 0;
}

int factorial(int a){
    int fact =1;

    for(int i=1; i<=a; i++){
        fact = fact * i;
    }
    
    return fact;
}