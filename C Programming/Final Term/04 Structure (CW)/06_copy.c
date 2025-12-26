#include <stdio.h>
int main(){
    typedef struct student{
        int roll;
        float mark;
        float cg;
    }student;

    student s = {22, 44.5, 3.00};

    printf("The roll is: %d\n",s.roll);
    printf("The mark is: %.2f\n",s.mark);
    printf("The cg is: %.2f\n",s.cg);

    student s2 = s;

    printf("\n\nThe roll is: %d\n",s2.roll);
    printf("The mark is: %.2f\n",s2.mark);
    printf("The cg is: %.2f\n",s2.cg);

    s2.roll = 11;
    printf("The roll is: %d\n",s.roll);
    printf("\n\nThe roll is: %d\n",s2.roll);   
   
    return 0;
}