#include <stdio.h>

int power();

int main(){
    int x, y;
    printf("Input a base: ");
    scanf("%d",&x);

    printf("Input a power: ");
    scanf("%d", &y);

    int p = power(x,y);
    printf("The power of %d is: %d",x,p);

    return 0;
}

int power(int x, int y){
    if(y==0) return 1;

    int r = x * power(x,y-1);
    return r;
}