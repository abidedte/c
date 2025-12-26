#include <stdio.h>
int main(){
    int x,y;
    printf("Inputr the value of x: ");
    scanf("%d",&x);
    printf("Input the value of y: ");
    scanf("%d",&y);

    int *p1;
    int *p2;

    p1 = &x;
    p2 = &y;

    int sum = *p1 + *p2;
    printf("\nThe address of x is: %p", &x);
    printf("\nThe address of y is: %p", &y);
    printf("\n\nThe sum of x and y is: %d\n\n",sum);

    return 0;
}