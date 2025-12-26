#include <stdio.h>
int main(){
    int alcohol=0, gasoline=0, diesel=0; 
    for(;;){
        int x;
        scanf("%d",&x);
        if(x==1) alcohol++;
        else if(x==2) gasoline++;
        else if(x==3) diesel++;
        else if(x==4) break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
    return 0;
}