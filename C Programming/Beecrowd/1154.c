#include <stdio.h>
int main(){
    int x;
    int sum = 0, count = 0;
    for(;;){
        scanf("%d",&x);
        if(x<0) break;
        sum = sum + x;
        count = count + 1;
    }
    float avarage = (float)sum/count;
    printf("%.2f\n",avarage);
    return 0;
}