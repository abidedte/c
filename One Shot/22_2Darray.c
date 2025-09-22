#include <stdio.h>
int main(){
    int arr[4][2]={
        {40,99},
        {41,98},
        {42,97},
        {43,96},
    };

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}