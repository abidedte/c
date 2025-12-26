#include <stdio.h>
int main(){
    int i,n,count=0;

    printf("Enter your number: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count=0){
        printf("prime number");
    }
    else{
        printf("%d is composite number",n);
    }

    return 0;
}