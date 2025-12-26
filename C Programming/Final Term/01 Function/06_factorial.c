#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    printf("Give me a number: ");
    scanf("%d",&n);
    int f=factorial(n);
    printf("the factoril number is: %d",f);

    return 0;
}