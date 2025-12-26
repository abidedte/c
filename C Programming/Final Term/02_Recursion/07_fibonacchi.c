#include <stdio.h>

int fibo();

int main(){
    int x;
    printf("Input a number: ");
    scanf("%d",&x);

    int f = fibo(x);
    printf("The fibonacchi is: %d",f);

    return 0;
}

int fibo(int a){
    if(a==0 || a==1) return 1;
    int r = fibo(a-1) + fibo(a-2);
    return r;
}