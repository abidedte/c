#include <stdio.h>
int main(){
    char s1[]="Abid Hasan read in the department of educational technology and engineering";
    char s2[30];

    strcpy(s2,s1);

    printf("s1 is: %s\n",s1);
    printf("s2 is: %s\n",s2);

    return 0;
}