#include <stdio.h>
int main(){
    int x;
    for(;;){
        scanf("%d",&x);
        if(x!=2002) printf("Senha Invalida\n");
        else{    printf("Acesso Permitido\n");
        }
        if(x==2002)
        break;

    }

    return 0;
}