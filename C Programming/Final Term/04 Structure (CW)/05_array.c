#include <stdio.h>
int main(){
    typedef struct student{
        int roll;
        float mark;
        float cg;
        char gread;
    }student;

    student arr[3];

    arr[0].roll = 21;
    arr[0].mark = 70;
    arr[0].cg = 3.69;
    arr[0].gread = 'A';

    printf("\nThe roll: %d\n",arr[0].roll);
    printf("The mark: %.2f\n",arr[0].mark);
    printf("The CGPA: %.2f\n",arr[0].cg);
    printf("The Gread: %c\n", arr[0].gread);

    student s = {22,69,3.55,'A'};
    arr[1] = s;

    printf("\nThe roll: %d\n",arr[1].roll);
    printf("The mark: %.2f\n",arr[1].mark);
    printf("The CGPA: %.2f\n",arr[1].cg);
    printf("The Gread: %c\n",arr[1].gread);

    student s1 = {23, 71.5, 3.99, 'A'};
    arr[2]= s1;

    printf("\nThe roll: %d\n",arr[2].roll);
    printf("The mark: %.2f\n",arr[2].mark);
    printf("The CGPA: %.2f\n",arr[2].cg);
    printf("The Gread: %c\n",arr[2].gread);

    return 0;
}

