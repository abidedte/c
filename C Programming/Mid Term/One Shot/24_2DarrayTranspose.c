#include <stdio.h>
int main(){
    int arr[4][5]={
        {50,81,82,83,10},
        {60,84,85,86,11},
        {70,87,88,89,12},
        {80,90,91,92,13},
    };

    printf("Row wise print:\n");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("col wise print:\n");

    for(int j=0; j<5; j++){
        for(int i=0; i<4; i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}