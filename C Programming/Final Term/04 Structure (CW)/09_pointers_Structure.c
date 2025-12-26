#include <stdio.h>
typedef struct student{
    char name[50];
    int age;
    float mark;
} std;

void change();

int main(){
    std s1 = {"Osman goni chowdhori", 26, 88.998};
    printf("\nAll information of student one: ");
    printf("\nThe name of student: %s",s1.name);
    printf("\nThe age of student: %d", s1.age);
    printf("\nThe mark of student: %.2f",s1.mark);

    change(&s1);

    printf("\n\nAfter changing the name of student: %s",s1.name);
    printf("\nAfter changing the age of student: %d",s1.age);
    printf("\nAfter changing the mark of student: %.2f",s1.mark);

    return 0;
}

void change(std *p){
    strcpy(p->name, "Motaleb equabla");
    p->age = 62;
    p->mark = 98.962; 
}