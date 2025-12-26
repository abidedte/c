#include <stdio.h>
int main(){
    float x,sum=0;
    int positive=0;
    for(float i=1; i<=6; i++){
        scanf("%f",&x);
        if(x>0){
            sum = sum + x;
            positive++;
        }
    }
    printf("%d valores positivos\n",positive);
    printf("%f\n",sum/positive);
    return 0;
}