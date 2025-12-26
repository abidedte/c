#include <stdio.h>

struct person{
    char name[30];
    int age;
    float salary;
};

int main(){

    printf("\nThe information of 1st person");
    struct person p1={"Abid hasan", 21, 30000.5};
    
    printf("\nThe name of 1st person: %s",p1.name);
    printf("\nThe age of 1st person: %d",p1.age);
    printf("\nThe salary of 1st person: %.2f",p1.salary);

    struct person p2;
    
    printf("\n\nThe information of 2nd person");

    p2.age= 33;
    p2.salary = 220009.5;
    strcpy(p2.name, "Md Rofik Uddin");

    printf("\nThe name of 2nd person: %s",p2.name);
    printf("\nThe age of 2nd person: %d",p2.age);
    printf("\nThe salary of 2nd person: %.2f", p2.salary);

    struct person p3;

    printf("\n\nThe information of 2nd person");
    p3 = p2;

    printf("\nThe name of 3rd person: %s",p3.name);
    printf("\nThe age of 3rd person: %d",p3.age);
    printf("\nThe salary of 3rd person: %.2f\n\n", p3.salary);

    return 0;
}