#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    int a=x, b=y, c=z;
    
    if(x>y) {int temp=x; x=y; y=temp;}
    if(x>z) {int temp=x; x=z; z=temp;}
    if(y>z) {int temp=y; y=z; z=temp;}

    printf("%d\n%d\n%d\n", x,y,z);

    printf("\n");

    printf("%d\n%d\n%d\n", a,b,c);

    return 0;
}