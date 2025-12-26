#include <stdio.h>
int main(){
    int x,y,sum=0;
    scanf("%d \n %d",&x,&y);
    if(x>y){
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    for(int i=x; i<=y; i++){
        if(i%13!=0) 
        sum = sum +i;
    }
    printf("%d\n",sum);
    return 0;
}