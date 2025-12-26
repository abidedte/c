#include <stdio.h>
int main(){
    int *ptr, x;
    x=99;
    ptr = &x;

    *ptr=33;

    printf("%d\n",*ptr);
    printf("%d\n", x);

}