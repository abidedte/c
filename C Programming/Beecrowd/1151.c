#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int first = 0, second = 1, next;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", first);
        } else if (i == 1) {
            printf(" %d", second);
        } else {
            next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
