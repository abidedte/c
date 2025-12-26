#include <stdio.h>
int main(){
    int i,n,flag=1;
    printf("Enter your number:");
    scanf("%d",&n);

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }

    return 0;
}
