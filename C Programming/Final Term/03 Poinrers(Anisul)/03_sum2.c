#include <stdio.h>

int sum();

int main(){
    int x, y;
    int num1 = 30;
    int num2 = 20;

    int s1 = sum(&num1, &num2);
    printf("\nThe sum is: %d",s1);

    int num3 = 49;
    int num4 = 51;

    int s2 = sum(&num3, &num4);
    printf("\nThe sum is: %d",s2);

    int num5 = 199;
    int num6 = 1;

    int s3 = sum(&num5, &num6);
    printf("\nThe sum is: %d",s3);

    return 0;
}

int sum(int *a, int *b){
    int result = *a + *b;
    return result;
}
