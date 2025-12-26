#include <stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);

    if(x%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is Odd");
    }


    return 0;
}