#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of triangle: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("* ");  //("%d",i)   ("%d",j)    ("%c", i+64)    ("%c",j+64)
        }
        printf("\n");
    }

    return 0;
}