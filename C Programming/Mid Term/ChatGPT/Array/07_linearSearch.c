#include <stdio.h>
int main(){
    int i,value,key=-1;

    int arr[9]={10,20,30,40,50,60,70,80,90};

    printf("Enter your search number: ");
    scanf("%d", &value);

    for(i=0; i<9; i++){
        if(value==arr[i]){
            key= i+1;
            break;
        }
    }
    if(key==-1){
        printf("item is not found\n");
    }
    else{
        printf("%d is found %dth possition",value,key);
    }



    return 0;
}