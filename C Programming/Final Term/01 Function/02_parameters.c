#include <stdio.h>

void evenodd(int x);

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    evenodd(x);

    return 0;
}
void evenodd(int x){
    if(x%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}