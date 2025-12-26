//write a program that can take some numbers and display maximum

#include <stdio.h>
int main(){

    int n,i;
    printf("who many time do you want to printf:");
    scanf("%d",&n);

    int num[n];

    for(i=0; i<n; i++){
        printf("enter your values: ");
        scanf("%d",&num[i]);
    }

    int max=num[0];

    for(i=1; i<n; i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    printf("Maximum value is: %d",max);


    return 0;
}
