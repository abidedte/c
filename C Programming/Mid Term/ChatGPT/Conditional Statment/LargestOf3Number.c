#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter your first number: ");
    scanf("%d", &x);
    printf("Enter your second number: ");
    scanf("%d", &y);
    printf("Enter your third number: ");
    scanf("%d", &z);

    if (x >= y && x >= z) {
        printf("%d is the greatest\n", x);
    } 
    else if (y >= x && y >= z) {
        printf("%d is the greatest\n", y);
    } 
    else {
        printf("%d is the greatest\n", z);
    }

    return 0;
}

