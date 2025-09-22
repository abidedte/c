#include <stdio.h>
int main(){
    int arr[6];
    printf("Enter your input: ");
    for(int i=0; i<=5; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<=5; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}