#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int i = 1; i <= Y; i++) {
        printf("%d", i);
        if (i % X != 0 && i != Y) {
            printf(" ");
        }
        if (i % X == 0) {
            printf("\n");
        }
    }
    return 0;
}