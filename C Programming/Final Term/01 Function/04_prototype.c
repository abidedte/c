#include <stdio.h>
void pakistan(){
    void afganistan();
    printf("I am from Pakistan\n");
    afganistan();
}
int main(){
    void bangladesh();
    printf("Where are you from: \n");
    bangladesh();
    return 0;
}
void afganistan(){
    printf("I am from afganistan\n");
}
void bangladesh(){
    void pakistan();
    printf("I am from Bangladesh\n");
    pakistan();
}