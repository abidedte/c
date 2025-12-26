#include <stdio.h>
int main(){
    float r, area, wall;
    printf("Enter the value of Radius:");
    scanf("%f",&r);

    area = 3.1415 * r * r;
    printf("Your value is : %.2f\n",area);

    wall = 2*3.1416*r;
    printf("The wall is: %.2f",wall);

    return 0;
}