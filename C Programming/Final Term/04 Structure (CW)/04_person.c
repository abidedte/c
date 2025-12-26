#include <stdio.h>
int main(){
    typedef struct person{
        char name[20];
        int age;
        int salary;
    } person;

    person p1;
    strcpy(p1.name, "MD.Rahim Isalm");
    p1.age = 44;
    p1.salary = 80000;

    printf("\nThe name of 1st person: %s",p1.name);
    printf("\nThe age of this man: %d", p1.age);
    printf("\nThe salary of this man: %d", p1.salary);

    person p2 = {"Md.Jamal Uddin", 55, 120000};

    printf("\n\nThe name of 2nd person: %s", p2.name);
    printf("\nThe age of this man: %d",p2.age);
    printf("\nThe salary of this man: %d\n\n",p2.salary);

    return 0;
}