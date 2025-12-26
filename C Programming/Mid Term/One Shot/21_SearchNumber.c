#include <stdio.h>
int main(){
    int n,i,value;
    printf("How many number do you want to take: ");
    scanf("%d",&n);

    int num[n];
    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    int poss=-1;
    
    printf("Enter your surching value: ");
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
        printf("The value is %d",poss);
    }

    return 0;
}