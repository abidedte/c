#include <stdio.h>
int main(){
    int n,i,next,first=0, second=1;
    printf("Enter your number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d ",first);
        next= first + second;
        first= second;
        second=next;
    }
    printf("\n");

    return 0;
}