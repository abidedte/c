#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter your 1st number: ");
    scanf("%d",&num1);

    printf("Enter your 2nd number: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("Large number is %d",num1);
    }
    else if (num2>num1){
        printf("Large number is %d",num2);
    }
    else{
        printf("The number is Equal");
    }

    
    return 0;
}