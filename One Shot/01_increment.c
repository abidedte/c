#include <stdio.h>
int main(){
    int x=5;

    printf("%d\n",x); // 5
    printf("%d\n",x++); // 5  post increment
    printf("%d\n",x); // 6

    printf("%d\n",++x); // 7  pre increment

    printf("%d\n",x--); // 7  post dicrement
    printf("%d\n",x);   // 6 

    printf("%d\n",--x);  //5  pre dicrement

    return 0;
}