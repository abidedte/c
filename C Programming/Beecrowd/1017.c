#include <stdio.h>
int main(){
    int t,v;
    float l;
    scanf("%d %d",&t,&v);
    l=v*t*(1.0/12);
    printf("%.3f\n", l);
    return 0;
}