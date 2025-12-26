#include <stdio.h>
int main(){
    int x, i, count=0;
    printf("Enter your Number: ");
    scanf("%d",&x);

    for(i=2; i<x; i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Prime Number\n");
    }
    else{
        printf("Not prime Number\n");
    }

    return 0;
}
