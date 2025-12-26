#include<stdio.h>
int main(){
    int a;
    printf("Enter your 1st number");
    scanf("%d",&a);
    int b;
    printf("Enter your 2nd number");
    scanf("%d",&b);
    int c;
    printf("Enter your 3rd number");
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    
    return 0;
}