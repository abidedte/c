#include <stdio.h>
int sum(int a,int b);
int sub(int x,int y);
int mult(int p,int q);

int main(){
    int a,b;
    printf("Enter your 1st number: ");
    scanf("%d",&a);

    printf("\nEnter your 2nd number: ");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("\nThe sum of this two number is: %d",s);

    int x,y;
    printf("\nEnter your 1st number: ");
    scanf("%d",&x);

    printf("\nEnter your 2nd number: ");
    scanf("%d",&y);

    int r=sub(x,y);
    printf("\nThe subtraction of this two number is: %d",r);

    int p,q;
    printf("\nEnter your 1st number: ");
    scanf("%d",&p);

    printf("\nEnter your 2nd number: ");
    scanf("%d",&q);

    int m=mult(p,q);
    printf("\nThe multiplication of this two number is: %d",m);

    return 0;
}

int sum(int a, int b){
    return a+b;
}

int sub(int x, int y){
    return x-y;
}

int mult(int p, int q){
    return p*q;
}