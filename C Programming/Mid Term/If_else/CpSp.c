#include <stdio.h>
int main(){
    int cp;
    printf("Enter your cost prize:");
    scanf("%d",&cp);
    int sp;
    printf("Enter your selling prize:");
    scanf("%d",&sp);
    if (sp>cp){
        printf("prifit");
    }
    if (cp>sp){
        printf("loss");
    }

    if (sp==cp){
        printf("no loss and no prinfit");
    }

    return 0;
}