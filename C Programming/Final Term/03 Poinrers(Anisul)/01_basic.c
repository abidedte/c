#include <stdio.h>
int main(){

    int x = 5;

    printf("The value of x is: %d",x);
    printf("\nThe address of x: %p",&x);

    int *p;
    p = &x;

    printf("\nThe value of p is: %p",p);
    printf("\nThe address of p: %p",&p);

    printf("\nThe value of x by p: %d", *p);


    return 0;
}