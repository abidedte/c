#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of triangle: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n+1-i; j++){   // for ulta loop j<=n+1-i
            printf("%c ", j+64);  // ("%d",i)   ("%d",j)    ("%c", i+64)    ("%c",j+64)
        }
        printf("\n");
    }
 
    return 0;
}