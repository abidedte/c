#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vagfol,vafshes;
    vagfol = n/100;
    vafshes = n%100;
    printf("%d nota(s) de R$ 100,00\n",vagfol);

    vagfol =vafshes/50;
    vafshes =vafshes%50;
    printf("%d nota(s) de R$ 50,00\n",vagfol);

    vagfol =vafshes/20;
    vafshes =vafshes%20;
    printf("%d nota(s) de R$ 20,00\n",vagfol);

    vagfol =vafshes/10;
    vafshes =vafshes%10;
    printf("%d nota(s) de R$ 10,00\n",vagfol);

    vagfol =vafshes/5;
    vafshes =vafshes%5;
    printf("%d nota(s) de R$ 5,00\n",vagfol);

    vagfol =vafshes/2;
    vafshes =vafshes%2;
    printf("%d nota(s) de R$ 2,00\n",vagfol);

    vagfol =vafshes/1;
    vafshes =vafshes%1;
    printf("%d nota(s) de R$ 1,00\n",vagfol);


    return 0;
}