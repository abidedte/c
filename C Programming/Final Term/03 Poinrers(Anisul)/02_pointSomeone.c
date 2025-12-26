#include <stdio.h>
int main(){
    int x = 19, y = 29, z = 39;
    int *p;

    p = &x;
    printf("\nThe value of x is: %d",*p);
    printf("\nThe address of x is: %p",&x);

    p = &y;
    printf("\nThe value of y is: %d", *p);
    printf("\nThe address of y is: %p",&y);

    p = &z;
    printf("\nThe value of z is: %d", *p);
    printf("\nThe address of z is: %p", &z);

    return 0;
}