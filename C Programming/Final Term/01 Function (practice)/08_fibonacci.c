#include <stdio.h>

void fibonacchi();

int main(){
    int x;
    printf("Input a number: ");
    scanf("%d",&x);

    fibonacchi(x);

    return 0;
}

void fibonacchi(int a){
    int first = 0, second = 1, next;
    for(int i=0; i<=a; i++){
        printf("%d ",first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}