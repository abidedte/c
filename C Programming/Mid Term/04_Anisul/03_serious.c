#include <stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("%d ", n );
        sum = sum + i;
    }
    printf("%d\n",sum);

    return 0;
}