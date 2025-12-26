#include <stdio.h>
int main(){
    float i, n, sum=0;
    printf("Enter your number:");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++){
        printf("%.2f",n);
        sum = sum + i;

    }

    printf("%.2f ",sum);

    return 0;
}