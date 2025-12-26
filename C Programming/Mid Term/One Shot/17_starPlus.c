#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size of square: ");
    scanf("%d",&n);

    int mid= n/2 + 1;
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==mid || j==mid){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}