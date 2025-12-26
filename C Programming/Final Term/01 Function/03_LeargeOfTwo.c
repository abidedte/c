#include <stdio.h>
int size(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b;
    printf("give me 1st and 2nd number: ");
    scanf("%d %d",&a, &b);
    int s=size(a,b);
    printf("the learge value is: %d",s);

    return 0;
}