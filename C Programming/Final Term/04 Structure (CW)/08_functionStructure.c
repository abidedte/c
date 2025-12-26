#include <stdio.h>
typedef struct student{
    char name[50];
    int age;
    float mark;
} std;

void print();

int main(){
    std s1 = {"Motaleb hossain Raijul Korim", 21, 99.998};

    print(s1);

    return 0;
}

void print(std s1){
    printf("The name of student is: %s",s1.name);
    printf("\nThe age of student is: %d",s1.age);
    printf("\nThe mark of student is: %.2f",s1.mark);
}