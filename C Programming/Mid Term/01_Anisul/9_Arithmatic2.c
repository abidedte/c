#include <stdio.h>
int main(){
    int num1,num2, result;
    printf("Enter your number: ");
    scanf("%d %d",&num1, &num2);

    result = num1 + num2;
    printf("sum is : %d\n", result );

    result = num1 - num2;
    printf("sub is : %d\n", result );

    result = num1 * num2;
    printf("Mult is : %d\n", result );

    result = num1 / num2;
    printf("Div is : %d\n", result );

    result = num1 % num2;
    printf("Remainder is : %d\n", result );

 
return 0;
}