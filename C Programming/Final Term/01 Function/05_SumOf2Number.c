#include <stdio.h>
int sum(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    printf("the sum of this number is: %d",s);

    return 0;
}
