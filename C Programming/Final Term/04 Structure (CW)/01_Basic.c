#include <stdio.h>
typedef struct student{
    char name[50];
    int age;
    float make;
    float cg;
} std;
int main(){
    std s1;
    strcpy(s1.name, "Habibul Bashar Rukun");
    s1.age = 29;
    s1.make = 90;
    s1.cg = 3.70;

    printf("\nAll information of Student-1:");
    printf("\nThe name of 1st student: %s",s1.name);
    printf("\nThe age of 1st student: %d",s1.age);
    printf("\nThe mark of 1st student: %.2f",s1.make);
    printf("\nThe cg os 1st student: %.2f",s1.cg);
    
    std s2 = {"Doctor Mohammod Younus", 85, 100.99, 4.00};
    printf("\n\nAll information of student-2");
    printf("\nThe name of 2nd student: %s",s2.name);
    printf("\nThe age of 2nd studnet: %d",s2.age);
    printf("\nThe make of 2nd student: %.2f",s2.make);
    printf("\nThe cg of 2nd studnet: %.2f",s2.cg);

    std s3 = {"Abul Hasan khan Banul Mia",31,77.99, 3.65};
    printf("\n\nAll information of student-3: ");
    printf("\nThe Name of 3rd student: %s",s3.name);
    printf("\nThe age of 3rd student: %d",s3.age);
    printf("\nThe mark of 3rd student: %.2f",s3.make);
    printf("\nThe cg of 3rd studnet: %.2f",s3.cg);

    return 0;
}