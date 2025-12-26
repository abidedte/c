#include <stdio.h>
int main(){
    int age[5];
    

    // scanf("%d",&age[0]);
    // scanf("%d",&age[1]);
    // scanf("%d",&age[2]);
    // scanf("%d",&age[3]);
    // scanf("%d",&age[4]);


    for (int i=0; i<=4; i++){
        scanf("%d", &age[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d\n", age[i]);
    }

    return 0;
}