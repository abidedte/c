#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);

    int num[n];

    for(int i = 0; i < n; i++) {
        printf("Enter your value: ");
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Your value is: %d\n", num[i]);
        sum = sum + num[i];
    }

    printf("The sum is %d\n", sum);
    printf("The average value is %.2f\n", (float)sum / n);

    return 0;
}