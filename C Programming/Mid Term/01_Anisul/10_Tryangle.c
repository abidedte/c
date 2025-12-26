#include <stdio.h>
int main(){
    float base, height, result;

    printf("Enter your base:");
    scanf("%f", &base);

    printf("Enter your height:");
    scanf("%f", &height);

    result = 1.0/2 * base * height;
    printf("Your area is: %.2f", result);


    return 0;
} 