#include <stdio.h>
int main(){
    int n,i,value;
    printf("Enter your number: ");
    scanf("%d",&n);

    int num[n];
    printf("Input your values: ");

    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    int poss=-1;

    printf("Enter your number for surch: ");
    scanf("%d",&value);


    for(i=0; i<n; i++){
        if(value==num[i]){
            poss=i+1;
            break;
        }
    }
    
    if(poss==-1){
        printf("The value is not found");
    }
    else{
        printf("The value is found: %d",poss);
    }

    return 0;
}