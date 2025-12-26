#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("How many number do you want to take input: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter you element: ");
        scanf("%d",&arr[i]);
    }

    printf("Your elements are: ");

    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
        sum =sum + arr[i];
    }

    printf("\nThe sum is: %d",sum);
    printf("\nThe avarage is: %.3f",(float)sum/n);


    return 0;
}