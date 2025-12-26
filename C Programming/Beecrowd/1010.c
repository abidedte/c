#include <stdio.h>
int main(){
    int a,b,c,d;
    float x, y, result;
    
    scanf("%d %d %f", &a, &b, &x);
    scanf("%d %d %f", &c, &d, &y);

    result = ((b*x)+(d*y));

    printf("VALOR A PAGAR: R$ %.2f\n",result);

    return 0;
}