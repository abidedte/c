#include <stdio.h>
int main(){
    char cl;
    float num1,num2;

    printf("Enter your 1st number: ");
    scanf("%f",&num1);

    printf("\nEnter your operator(+ - * /): ");
    scanf(" %c",&cl);

    printf("\nEnter your 2nd number: ");
    scanf("%f",&num2);

    switch(cl){
        case '+':
        printf("%f + %f = %f",num1,num2,num1+num2);
        break;

        case '-':
        printf("%f - %f = %f",num1,num2,num1-num2);
        break;

        case '*':
        printf("%f * %f = %f",num1,num2,num1*num2);
        break;

        case '/':
        printf("%f / %f = %f",num1,num2,num1/num2);
        break;

        default:
        printf("Invalide operator");
    }


    return 0;
}

