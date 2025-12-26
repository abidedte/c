#include <stdio.h>
int main(){
    char s1[30];
    printf("Enter your full Name: ");
    gets(s1); // gets is the replacement of scanf 

    printf("full name = %s\n",s1);


    return 0;
}