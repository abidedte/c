#include <stdio.h>
int main(){
    printf("\n\n");
    
    int x=9; 
    int *z1=&x;

    int y=9;
    int *z2=&y;

    printf("%p\n", z1);
    printf("%p\n", z2);
    printf("\n\n");

    return 0;
}