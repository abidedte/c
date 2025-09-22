#include <stdio.h>
int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);

    int b= (int)a;
    float c=(float)b;

    if(a-c==0){
        printf("The number is integer");
    }
    else{
        printf("The number is not integer");
    }

    return 0;
}