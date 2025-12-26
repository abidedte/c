#include <stdio.h>
int main(){
    int x;
    printf("Enter your Number:");
    scanf("%d",&x);

    if(x>0){
        printf("The number is Positive");
    }
    else if(x<0){
        printf("The number is negative");
    }
    else{
        printf("The number is Zero");
    }

    return 0;
}