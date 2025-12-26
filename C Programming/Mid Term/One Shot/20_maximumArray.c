#include <stdio.h>
int main(){
    int i,n;
    printf("How many number do you want to ender: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter your element: ");
    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    int max=num[0];
    
    for(i=1; i<n; i++){
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("Maximum valu is:%d",max);

    return 0;
}