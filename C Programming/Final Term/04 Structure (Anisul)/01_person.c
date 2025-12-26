#include <stdio.h>

struct person{

    char name[50];
    int age;
    float salary;

};

int main(){

    struct person p1;
    p1.age = 31;
    p1.salary = 29000.50;
    strcpy(p1.name, "Md. Jamal Uddin");

    printf("\nThe name of this man is: %s",p1.name);
    printf("\nThe age of this man is: %d",p1.age);
    printf("\nThe salary of this man is: %.2f",p1.salary);

    struct person p2;
    p2.age = 33;
    p2.salary = 56000.66;
    strcpy(p2.name, "Md jalal Uddin Khan Bahadur Islam Robin Hood");

    printf("\n\nThe name of this man is:%s",p2.name);
    printf("\nThe age of this man is: %d",p2.age);
    printf("\nThe salary of this man is: %.2f", p2.salary);

    return 0;
}