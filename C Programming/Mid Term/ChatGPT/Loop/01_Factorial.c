#include <stdio.h>
int main(){
    int n,i;
    long long fact=1;

    printf("Enter your number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial is not working");
    }
    else{
        for(i=1; i<=n; i++){
            fact= fact * i;
        }
        printf("%d",fact);
    }

    return 0;
}