#include <stdio.h>
int main(){
    int num, i, result;
    printf("Enter your Number: ");
    scanf("%d",&num);


    for (i=1; i<=10; i++){
        printf("%d X %d = %d\n",num, i, i*num );
    }

    


    return 0;
}