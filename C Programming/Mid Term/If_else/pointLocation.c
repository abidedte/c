#include <stdio.h>
int main(){
    int x,y;
    printf("Enater the number:");
    scanf("%d %d",&x,&y);
    if (y==0 && x==0){
        printf("the number is origin");
    }
    else if (y==0){
        printf("Lies on x axis");
    }
    else if (x==0){
        printf("Lies on y axis");
    }
    else{
        printf("the point dose not lies on x axis or y axis");
    }
  

    return 0;
}