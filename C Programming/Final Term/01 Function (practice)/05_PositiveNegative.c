#include <stdio.h>
void check(int z);
int main(){
    int x;
    printf("give me a number: ");
    scanf("%d",&x);

    check(x);
    
    return 0;
}

void check(int z){
    if(z>0) printf("Positive number");
    else if(z<0) printf("Not a positive number");
    else if(z==0) printf("z is zero");
}