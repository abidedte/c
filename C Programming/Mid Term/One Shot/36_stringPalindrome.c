#include <stdio.h>
int main(){
    char s1[50]="Sanonda Shaha Trisha";
    char s2[50]="Abid Hasan";
    char temp[50];

    printf("before print\n");
    printf("%s\n",s1);
    printf("%s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("After print\n");
    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);

    return 0;
}