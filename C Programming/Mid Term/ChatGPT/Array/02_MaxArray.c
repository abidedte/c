#include <stdio.h>
int main(){
    int i,n;

    printf("Enter the number of array: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the element of array: ");
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The max number is: %d",max);

    return 0;
}