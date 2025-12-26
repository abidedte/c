#include <stdio.h>

void prime();

int main(){
    int x;
    printf("Input a number: ");
    scanf("%d",&x);

    prime(x);

    return 0;
}

void prime(int a){
    int count = 0;
    for(int i=2; i<=a/2; i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count == 0) printf("The number is a prime number");
    else{
        printf("The number is not a prime number");
    }
}