#include <stdio.h>
int main(){
    char ch;
    printf("Enter the operator: ");
    scanf("%c",&ch);

    int a;
    printf("Enter your 1st number: ");
    scanf("%d",&a);

    int b;
    printf("Enter your 2nd number: ");
    scanf("%d",&b);

    if(ch=='+'){
        printf("%d",a+b);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else if(ch=='/'){
        printf("%d",a/b);
    }
    else{
        printf("Invalid operator");
    }

    return 0;
}