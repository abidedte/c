#include <stdio.h>

int fact();

int main(){
    int a;
    printf("Input a number: ");
    scanf("%d",&a);

    int f;
    f = fact(a);

    printf("The factorial of %d is: %d",a, f);
    
    return 0;
}

int fact(int x){
    if(x == 0 || x == 1) return 1;
    int r = x * fact(x-1);
    return r;
}