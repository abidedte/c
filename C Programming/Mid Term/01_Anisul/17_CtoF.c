#include <stdio.h>
int main(){
    float C,F;
    printf("Enter your Centigrade value:");
    scanf("%f",&C);

    F = (1.8*C)+32;
    printf("The temperature of Fahrenheit value is: %.2f\n",F);
    
    return 0;
}