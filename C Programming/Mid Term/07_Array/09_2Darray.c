#include <stdio.h>
int main() {
    int i, j;
    int a[3][4];

    // Input
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Output
    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);  // add space
        }
        printf("\n");
    }

    return 0;
}