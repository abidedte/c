#include <stdio.h>
float circleArea(float radious);
float squareArea(float side);
float rectangular(float a, float b);
int main(){
    float a,b;
    printf("Input the value of a: ");
    scanf("%f",&a);
    printf("Input the value of b: ");
    scanf("%f",&b);

    float c = circleArea(a);
    printf("\nThe area of a circle is: %.2f",c);
    
    float s = squareArea(b);
    printf("\nThe area of a square is: %.2f",s);

    float r = rectangular(a,b);
    printf("\nThe area of a rectangular is: %.2f",r);


    return 0;
}
float circleArea(float a){
    return 3.14*a*a;
}
float squareArea(float b){
    return b*b;
}
float rectangular(float a, float b){
    return a*b;
}