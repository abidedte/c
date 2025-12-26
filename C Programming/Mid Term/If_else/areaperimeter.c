#include<stdio.h>
int main(){
    int l;
    printf("Enter your length");
    scanf("%d",&l);
    int b;
    printf("Enter your breadth");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if (a>p){
        printf("area is greater than perimeter");
    }
    if (p>a){
        printf("perimeter is greater than area");
    }
    if (p==a){
        printf("area and perimeter both are same");
    }
    return 0;
}