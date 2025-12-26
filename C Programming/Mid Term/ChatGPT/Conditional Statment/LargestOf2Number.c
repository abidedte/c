#include <stdio.h>
int main(){
    int x,y;
    printf("Enter your 1st number: ");
    scanf("%d",&x);
    printf("Enter your 2nd number: ");
    scanf("%d",&y);

    if(x>y){
        printf("x is gater then y");
    }
    else if(y>x){
        printf("y is gater then x");
    }
    else{
        printf("x and y are equal");
    }

    return 0;
}