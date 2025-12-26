#include <stdio.h>

float squareArea(float side);
float circleArea(float radious);
float rectanglerArea(float a, float b);


int main(){

    float a=10.3;
    float b=5.8;

    printf("area is %.2f\n", squareArea(a));

    printf("area is %.2f\n", circleArea(b));

    printf("area is %.2f\n", rectanglerArea(a,b));

    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float radious){
    return 3.14 * radious * radious;
}

float rectanglerArea(float a, float b){
    return a * b;
}