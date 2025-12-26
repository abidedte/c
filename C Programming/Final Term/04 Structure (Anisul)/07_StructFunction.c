#include <stdio.h>
struct person{
    char name[50];
    int age;
    float salary;
};


void display(struct person a){
    printf("Name : %s\n", a.name);
    printf("Age : %d\n",a.age);
    printf("Salary : %.2f\n", a.salary);
}


int main(){
    struct person p1;
    strcpy(p1.name, "Anicul Islam");
    p1.age = 27;
    p1.salary = 12000.5;

    display(p1);

    struct person p2;
    strcpy(p2.name,"Md Abdul Jabbar");
    p2.age = 28;
    p2.salary = 14000.6;

    display(p2);

    struct person p3;
    strcpy(p3.name, "Md Jalal Uddin");
    p3.age = 29;
    p3.salary = 16000.7;

    display(p3);

    return 0;
}