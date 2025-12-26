#include <stdio.h>

int add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}

int sub(int p, int q){
    int sub;
    sub = p - q;
    return sub;
}

int mul(int x, int y){
    int mul;
    mul = x * y;
    return mul;
}


int main(){

    int x, y,result;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    result = add(x,y);
    printf("the sum is: %d\n",result);

    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    result = sub(a,b);
    printf("the sub is: %d\n",result);

    int p,q;
    printf("Enter the value of p and q");
    scanf("%d %d",&p,&q);
    result = mul(p,q);
    printf("the multiplication is: %d\n",result);
    

    return 0;
}