#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the number of array: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }

    printf("Array in organize way:");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    printf("\nArray in Reverse way: ");
    for(i=n-1; i>=1; i--){
        printf("%d",arr[i]);
    }

    return 0;
}