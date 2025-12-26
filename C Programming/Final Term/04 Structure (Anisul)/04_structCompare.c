#include <stdio.h>

int main(){
    struct person{
        int age;
        float salary;
    };

    struct person p1;
    p1.age = 24;
    p1.salary = 22000.5;

    struct person p2;
    p2.age = 24;
    p2.salary = 22000.5;

    if(p1.age == p2.age && p1.salary == p2.salary){
        printf("\nperson 1 equal to person 2");
    }
    else{
        printf("\nperson 1 not equal to person 2");
    }

    return 0;
}