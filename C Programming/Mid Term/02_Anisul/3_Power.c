#include <stdio.h>
int main(){
    int x, y;
    printf("Enter X:");
    scanf("%d",&x);

    printf("Enter Y: ");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("%.3lf",result);

    return 0;
}