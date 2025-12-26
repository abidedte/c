#include <stdio.h>
int main(){
    int *ptr, c;
    c=88;
    ptr = &c;

    c=77;

    printf("%d\n",c);
    printf("%d\n",*ptr);

    return 0;
}