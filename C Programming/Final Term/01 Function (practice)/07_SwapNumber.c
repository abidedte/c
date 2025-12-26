#include <stdio.h>

void swap();

int main(){
    int a,b;
    printf("Input The value of a: ");
    scanf("%d",&a);
    printf("Input The value of b: ");
    scanf("%d",&b);

    printf("\nBefore Swapping The value of A is: %d",a);
    printf("\nBefore Swapping The value of B is: %d\n",b);

    swap(a,b);

    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y; 
    y = temp;

    printf("\nAfter swapping the value of A is: %d",x);
    printf("\nAfter swapping the value of B is: %d",y);
}