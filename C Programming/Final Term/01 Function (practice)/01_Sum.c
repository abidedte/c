#include <stdio.h>
int sum(int x, int y);
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x, &y);

    int s = sum(x, y);
    printf("The sum is: %d",s);

    return 0;
}
int sum(int x, int y){
    return x + y;
}