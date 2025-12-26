#include <stdio.h>
int main(){
    int x,y;
    printf("Enter your 1st number:");
    scanf("%d",&x);

    printf("enter your 2nd number: ");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d\n",x);
    printf("%d",y);

    return 0;
}