#include <stdio.h>
int  main(){
    int x;
    int fact=1;
    scanf("%d",&x);

    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    printf("%d\n",fact);
    return 0;
}