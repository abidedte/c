#include <stdio.h>
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return *a, *b;
}
int main(){
    int x =19;
    int y=28;
    printf("The value of x and y are: %d %d",x,y);

    swap(&x, &y);
    
    printf("\nAfter swapping the value of x and y are: %d %d",x,y);

    return 0;
}