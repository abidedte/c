#include <stdio.h>
void oddEven(int x);
int main(){
    int x;
    printf("Give me a number: ");
    scanf("%d",&x);

    oddEven(x);

    return 0;
}
void oddEven(int x){
    if(x%2==0) printf("%d is Even number",x);
    else printf("%d is an odd number",x);

}