#include <stdio.h>
int main(){
    int i,n,remainder,reverse=0,original;
    printf("Enter your number:");
    scanf("%d",&n);

    original=n;

    while(n!=0){
        remainder = n % 10;
        reverse = reverse * 10 +remainder;
        n=n/10;
    }
    if(original==reverse){
        printf("Paliandrome");
    }
    else{
        printf("not paliandrome");
    }

    return 0;
}