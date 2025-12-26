#include <stdio.h>
int main(){
    int i,n,sum=0;

    printf("Enter the number of array elements: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("avarage is :%d", sum/n);

    return 0;
}