#include <stdio.h>
int main(){
    int *ptr, x,y;
    x=44;
    y=88;

    ptr = &x;
    printf("%d\n",*ptr);
    
    ptr = &y;
    printf("%d\n",*ptr);

    return 0;
}