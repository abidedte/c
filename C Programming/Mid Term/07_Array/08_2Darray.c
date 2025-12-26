#include <stdio.h>
int main(){
    int i,j;

    int a[3][4]={
        {11,33,66,32},
        {55,34,26,86},
        {98,59,27,23},
    };

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}