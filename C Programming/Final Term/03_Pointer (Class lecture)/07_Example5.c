#include <stdio.h>
int main(){
    int *ptr, c;
    c=44;
    printf("The address of c is: %p\n",&c);
    printf("The value of c is: %d\n",c);

    ptr = &c;
    printf("The address of pointer: %p\n",ptr);
    printf("The containt of pointer: %d\n", *ptr);    

    c=99;
    printf("The address of pointer: %p\n",ptr);
    printf("The containt of pointer: %d\n",*ptr);

    *ptr = 33;
    printf("The address of pointer: %p\n",ptr);
    printf("The value of c : %d\n",c);
    return 0;
}