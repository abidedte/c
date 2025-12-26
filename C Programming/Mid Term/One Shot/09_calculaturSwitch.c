#include <stdio.h>
int main(){
    char ch;
    printf("Enter your Operator: ");
    scanf("%c",&ch);

    int x;
    printf("Enter your 1st number: ");
    scanf("%d",&x);

    int y;
    printf("Enter your 2nd number: ");
    scanf("%d",&y);

    switch(ch){
        case '+':
            printf("%d\n",x+y);
            break;
        case '-':
            printf("%d\n",x-y);
            break;
        case '*':
            printf("%d\n",x*y);
            break;
        case '/':
            printf("%d\n",x/y);
            break;
        default :
            printf("Your operator is not valid");

        }

    return 0;
}