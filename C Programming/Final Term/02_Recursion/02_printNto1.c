#include <stdio.h>
void printn();
int main(){
    int n;
    printf("Input a number: ");
    scanf("%d",&n);

    printn(n);

    return 0;
}
void printn(int x){
    if(x==0) return;


    printf("%d\n",x);
    printn(x-1);
}