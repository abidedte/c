#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st and 2nd number:");
    scanf("%d %d",&num1, &num2);
    if(num1>num2){
        printf("The largest value is %d",num1);
    }
    else if(num2>num1){
        printf("The largest value is %d",num2);
    }
    else{
        printf("The number is Equal");
    }


    return 0;
}