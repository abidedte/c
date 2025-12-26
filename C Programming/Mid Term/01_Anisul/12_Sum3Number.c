#include <stdio.h>
int main(){
    int num1, num2, num3, sum;
    float avg;
    printf("Enter you 3 numbers");
    scanf("%d %d %d", &num1,&num2,&num3);

    sum = num1 + num2 + num3;
    printf("your result is : %d\n", sum);

    avg = sum/3.0;
    printf("Your avg is %.3f",avg);



    return 0;
}