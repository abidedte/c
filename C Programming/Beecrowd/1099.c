#include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            int temp = x;
            x = y; 
            y = temp;
        }
        int sum = 0;
        for(int i=x+1; i<y; i++){
            if(i%2!=0){
            sum = sum + i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}