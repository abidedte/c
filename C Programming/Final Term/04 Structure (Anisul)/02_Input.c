#include <stdio.h>

struct person{
    char name[50];
    int age;
    float salary;
};

int main(){

    struct person p1;
    printf("Enter the information of 1st person\n");
    printf("Enter the name of 1st person: ");
    scanf("%s",p1.name);

    printf("Enter the age of 1st person: ");
    scanf("%d",&p1.age);

    printf("Enter the salary of 1st person: ");
    scanf("%f",&p1.salary);

    printf("\nThe name is: %s",p1.name);
    printf("\nThe age is: %d",p1.age);
    printf("\nThe salary is: %.2f",p1.salary);

    struct person p2;
    printf("\n\nEnter the information of 2nd person\n");
    printf("Enter the name of 2nd person: ");
    scanf("%s",p2.name);

    printf("Enter the age of 2nd person: ");
    scanf("%d",&p2.age);

    printf("Enter the salary of 2nd person: ");
    scanf("%f",&p2.salary);

    printf("\nThe name is: %s",p2.name);
    printf("\nThe age is: %d",p2.age);
    printf("\nThe salary is: %.2f",p2.salary);

    return 0;
}