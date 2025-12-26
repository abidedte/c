#include <stdio.h>
int main(){
    
    char s1[]="Abid Hasan";
    char s2[]="Abid Hasan";

    int d= strcmp(s1,s2);
    if(d==0){
        printf("String are equal");
    }
    else{
        printf("String are not equal");
    }

    return 0;
}