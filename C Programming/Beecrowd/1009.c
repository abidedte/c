#include <stdio.h>
int main(){
    char name[50];   
    scanf("%s", name);  
    double x,y,selary;
    scanf("%lf %lf",&x, &y);
    selary = x + (y * .15);
    printf("TOTAL = R$ %.2lf\n",selary);
    return 0;
}