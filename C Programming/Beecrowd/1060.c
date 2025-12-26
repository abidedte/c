#include <stdio.h>
int main(){
    float n;
    int count = 0;

    for(int i=1; i<7; i++){
        scanf("%f",&n);
        if(n>0){
            count++;
        }
    }

    printf("%d valores positivos",count);

    return 0;
}