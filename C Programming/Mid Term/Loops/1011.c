#include <stdio.h>
int main(){
    double r;
    double pi=3.14159;
    double VOLUME;
    scanf("%lf",&r);
    VOLUME = (4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}