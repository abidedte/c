#include <stdio.h>
int main(){
    int x, y;
    for(;;){
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0) break;

        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;

        for(int i = x; i <= y; i++){
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
