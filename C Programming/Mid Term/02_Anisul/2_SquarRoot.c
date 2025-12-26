#include <stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);

    double result = sqrt(x);
    printf("%.3lf",result);
    

    return 0;
}