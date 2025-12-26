#include <stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);

    if(n%5==0 && n%11==0){
        printf("Your number is divisible by 5 and 11");
    }
    else{
        printf("Your number in not divisible by 5 and 11");
    }

    return 0;
}