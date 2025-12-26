#include <stdio.h>

void swap();

int main(){
    int x,y;
    printf("Input the number of x: ");
    scanf("%d",&x);
    printf("Input the number of y: ");
    scanf("%d",&y);

    printf("\nBefore swapping the value of x is: %d",x);
    printf("\nBefore swapping the value of y is: %d",y);

    swap(&x, &y);

    printf("\n\nAfter swapping the value of x is: %d",x);
    printf("\nAfter swapping the value of y is: %d",y);

    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\n\nIn swapping The value of x is: %d",*a);
    printf("\nIn swapping The value of Y is: %d",*b);
}
