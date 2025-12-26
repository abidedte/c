#include <stdio.h>

int main() {
    int X;

    for (;;) {
        scanf("%d", &X);

        if (X == 0) {
            break;
        }
        for (int i = 1; i <= X; i++) {
            printf("%d", i);
                if (i < X) {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}