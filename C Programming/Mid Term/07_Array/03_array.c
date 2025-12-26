#include <stdio.h>
int main(){
    int age[5], sum=0, i;

    for(i=0; i<=4; i++){
        printf("Enter your values: ");
        scanf("%d",&age[i]);
    }

    for(i=0; i<=4; i++){
        printf("Your value is: %d\n",age[i]);
        sum = sum +age[i];
    }

    printf("Your sum is: %d\n",sum);
    printf("The avarage value is: %.2f\n", sum/5.0);

    return 0;
} 