#include <stdio.h>

void print();

int main(){
    int a;
    printf("Input a value of a: ");
    scanf("%d",&a);

    print(a);

    return 0;
}

void print(int x){
    if(x==0) return 1;

    print(x-1);

    printf("%d\n",x);
    
}