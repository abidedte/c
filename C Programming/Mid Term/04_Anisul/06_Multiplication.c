#include <stdio.h>
int main(){
    int i,n,mult=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        mult = mult*i;
    }
    printf("%d\n",mult);


    return 0;
}