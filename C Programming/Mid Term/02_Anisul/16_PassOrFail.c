#include <stdio.h>
int main(){
    float mark;
    printf("Enter your mark: ");
    scanf("%f",&mark);

    if(mark>=33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }

    return 0;
}