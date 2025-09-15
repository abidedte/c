#include <stdio.h>
int main(){
    double A, B, C, tria, cir, trap, quad, retan, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    tria = .5 * A * C;
    cir = pi * C * C;
    trap = .5 * (A+B) * C;
    quad = B * B;
    retan = A * B;
    printf("TRIANGULO: %.3lf\n", tria);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", retan);
    return 0;
}