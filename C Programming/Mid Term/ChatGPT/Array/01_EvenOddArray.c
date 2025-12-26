#include <stdio.h>
int main(){
    int i, n, evencount=0, oddcount=0;
    
    printf("Enter the number of array elements: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter your array's elements: ");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("\nThe total even number is: %d",evencount);
    printf("\nThe total odd number is: %d",oddcount);

    return 0;
} 