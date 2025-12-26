#include <stdio.h>
int main(){
    int i,n;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int arr1[n], arr2[n];
    for(i=0; i<n; i++){
        printf("Enter the elements of array: ");
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++){
        arr2[i]=arr1[i];
    }

    printf("array one: ");
    for(i=0; i<n; i++){
        printf("%d",arr1[i]);
    }

    printf("\nArray two");
    for(i=0; i<n; i++){
        printf("%d",arr2[i]);
    }

    return 0;
}