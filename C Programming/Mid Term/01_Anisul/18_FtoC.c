#include <stdio.h>
int main(){
    float F,C;
    printf("Enter the value of Fahrenhit: ");
    scanf("%f",&F);

    C = (F-32)/1.8;
    printf("The Centigrade value is :%.3f\n",C);



    return 0;
}