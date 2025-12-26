#include <stdio.h>
int main(){
    int a[5] = {5,10,54,28,19};
    int *p;
    
    p = &a[0];

    for(int i=0; i<5; i++){
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
