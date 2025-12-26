#include <stdio.h>
void goodm();
int main(){
    int x;
    printf("How many time do you want to print: ");
    scanf("%d",&x);

    goodm(x);
}
void goodm(int a){
    if(a==0) return;
    printf("Good morning\n");

    goodm(a-1);
}