#include <stdio.h>
int main(){
    float base, height, area;
    printf("Enter your base:");
    scanf("%f",&base);

    printf("Enter your height:");
    scanf("%f",&height);

    area = .5 * base * height;
    printf("The area of this triangle is : %f", area);

    return 0;
}