#include <stdio.h>
int main(){
    int x,y,temp;
    printf("Enter your 1st number: ");
    scanf("%d",&x);
    printf("Enter your 2nd number: ");
    scanf("%d",&y);

    printf("\nyour 1st number is:%d",x);
    printf("\nyour 2nd number is:%d",y);

    temp = x;
    x=y;
    y=temp;

    printf("\n\nnow your 1st number is:%d",x);
    printf("\nnow your 2nd number is:%d",y);


    return 0;
}