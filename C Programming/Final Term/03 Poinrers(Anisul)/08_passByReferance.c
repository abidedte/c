#include <stdio.h>
void modification();
int main(){

    int x,y;
    printf("\nInput the value of x: ");
    scanf("%d",&x);
    printf("\nInput the value of y: ");
    scanf("%d",&y);

    printf("\nThe value of x: %d",x);
    printf("\nThe value of y: %d",y);

    modification(&x, &y);

    printf("\nNow The value of x: %d",x);
    printf("\nNow The value of y: %d",y);
    

    return 0;
}
void modification(int *a, int *b){
    *a = 29;
    *b = 39;
}
