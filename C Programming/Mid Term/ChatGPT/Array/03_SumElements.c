#include <stdio.h>
int main(){
    int i,n,sum=0;

    printf("Enter the number of Elements: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        sum= sum+ arr[i];
    }
    printf("\n%d",sum);

    return 0;
}