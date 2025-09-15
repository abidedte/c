#include <stdio.h>
int main(){
    double n;
    scanf("%lf",&n);
    n = n * 100 + 0.5; // avoid floating point precision error
    int x = n;

    printf("NOTAS:\n");

    int n100, n50, n20, n10, n5, n2;
    int p1, p50, p25, p10, p05, p01;
    int vagsesh;

    n100 = x / 10000; vagsesh = x % 10000;
    printf("%d nota(s) de R$ 100.00\n", n100);

    n50 = vagsesh / 5000; vagsesh %= 5000;
    printf("%d nota(s) de R$ 50.00\n", n50);

    n20 = vagsesh / 2000; vagsesh %= 2000;
    printf("%d nota(s) de R$ 20.00\n", n20);

    n10 = vagsesh / 1000; vagsesh %= 1000;
    printf("%d nota(s) de R$ 10.00\n", n10);

    n5 = vagsesh / 500; vagsesh %= 500;
    printf("%d nota(s) de R$ 5.00\n", n5);

    n2 = vagsesh / 200; vagsesh %= 200;
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    p1 = vagsesh / 100; vagsesh %= 100;
    printf("%d moeda(s) de R$ 1.00\n", p1);

    p50 = vagsesh / 50; vagsesh %= 50;
    printf("%d moeda(s) de R$ 0.50\n", p50);

    p25 = vagsesh / 25; vagsesh %= 25;
    printf("%d moeda(s) de R$ 0.25\n", p25);

    p10 = vagsesh / 10; vagsesh %= 10;
    printf("%d moeda(s) de R$ 0.10\n", p10);

    p05 = vagsesh / 5; vagsesh %= 5;
    printf("%d moeda(s) de R$ 0.05\n", p05);

    p01 = vagsesh / 1; vagsesh %= 1;
    printf("%d moeda(s) de R$ 0.01\n", p01);

    return 0;
}
