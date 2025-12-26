#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<=n; i++){
        printf("Enter your element: ");
        scanf("%d",&arr[i]);
    }

    printf("Your elements are: ");
    for(int i=0; i<=n; i++){
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
    printf("\nyour sum is: %d\n",sum);
    printf("your avarage is: %d",sum/n);


    return 0;
} 