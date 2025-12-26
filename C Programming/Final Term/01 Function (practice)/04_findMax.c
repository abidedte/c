#include <stdio.h>
void max(int x, int y);
int main(){
    int x,y;
    printf("Give me 2 number: ");
    scanf("%d %d",&x,&y);

    max(x,y);

    return 0;
}
void max(int x, int y){
    if(x>y) printf("%d is greater than %d",x,y);
    else if(y>x) printf("%d is greater than %d",y,x);
    else printf("%d and %d are equale",x,y);

}