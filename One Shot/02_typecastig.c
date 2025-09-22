#include <stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    
    //typecastiong

    float y= (float)x;
    printf("%f", y/2);

    return 0;
}