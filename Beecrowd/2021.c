#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("NOTAS:");
    int com, incom;
    com = n/100;
    incom = n%100;
    printf("%d nota(s) de R$ 100.00\n",com);

    com = incom/50;
    incom = incom%50;
    printf("%d nota(s) de R$ 50.00\n",com);
    
    com = incom/20; 
    incom = incom%20;
    printf("%d nota(s) de R$ 20.00\n",com);

    com = incom/10;
    incom = incom%10;
    printf("%d nota(s) de R$ 10.00\n",com);

    com = incom/5;
    incom = incom%5;
    printf("%d nota(s) de R$ 5.00\n",com);

    com = incom/2;
    incom = incom%2;
    printf("%d nota(s) de R$ 2.00\n",com);

    printf("MOEDAS:\n");

    com = incom/1;
    incom = incom%1;
    printf("%d moeda(s) de R$ 1.00\n",com);

    com = incom/(1/2);
    incom = incom%(1/2);
    printf("%d moeda(s) de R$ 0.50\n",com);

    com = incom/(1/4);
    incom = incom%(1/4);
    printf("%d moeda(s) de R$ 0.25\n");

    com = incom/(1/10);
    incom = incom%(1/10);
    printf("%d moeda(s) de R$ 0.10\n",com);

    com = incom/(5/100);
    incom = incom%(5/100);
    printf("%d moeda(s) de R$ 0.05\n",com);

    com = incom/(1/100);
    incom = incom%(1/100);
    printf("%d moeda(s) de R$ 0.01\n",com);
    
    return 0;
}