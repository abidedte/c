#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x,in=0,out=0;
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
    if(x>=10 && x<=20){
        in++;
    }
    else{
        out++;
    }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}