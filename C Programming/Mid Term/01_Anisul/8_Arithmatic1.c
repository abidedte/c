#include <stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter two number: ");
    scanf("%d %d",&num1, &num2);

    sum = num1 + num2;
    printf("The sum is : %d\n", sum);

    float avg;
    avg = sum/2.00;
    printf("The avarage is %.2f",avg);

    return 0;
}  