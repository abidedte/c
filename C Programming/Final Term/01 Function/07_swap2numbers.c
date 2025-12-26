#include <stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("before swapping the value is: %d %d\n",a,b);
}
int main(){
    int x,y;
    printf("Enter 1st number: ");
    scanf("%d",&x);

    printf("Enter 2nd number: ");
    scanf("%d",&y);

    printf("After swapping: %d %d\n",x,y);

    swap(x,y);

    printf("Befor swapping: %d %d\n",x,y);

    return 0;
}