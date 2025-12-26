#include <stdio.h>

int sum();

int main(){
    int x; 
    printf("Input a vlaue of x: ");
    scanf("%d",&x);

    int s = sum(x);
    printf("The sum is: %d\n",s);

    return 0;
}

int sum(a){
    if(a==0) return 1;
    int r;
    r = a + sum(a-1);
    return r;
}