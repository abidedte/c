#include <stdio.h>
int main(){
    int x,y;
    printf("\nInput The value of x: ");
    scanf("%d",&x);
    printf("Input The value of y: ");
    scanf("%d",&y);
    
    printf("\nThe Value of x before swapping: %d", x);
    printf("\nThe value of y before swapping: %d", y);

    int *p1, *p2;
    p1 = &x;
    p2 = &y;



    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\n\nThe value of x after swapping: %d", x);
    printf("\nThe value of y after swapping: %d", y);


    return 0;
}