#include <stdio.h>
typedef union studrnt{
    int roll;
    float mark;
    char gread;
    char name[50];
} std;
int main(){
    std s1;
    s1.roll = 24;
    s1.mark = 44.235;
    s1.gread = 'C';
    strcpy(s1.name, "Md Rofik Ikbal hasan");

    printf("\n\nThe roll is: %d\n",s1.roll);
    printf("The mark is: %.2f\n",s1.mark);
    printf("The gread is: %c\n",s1.gread);
    printf("The name is: %s\n\n",s1.name);

    return 0;
}