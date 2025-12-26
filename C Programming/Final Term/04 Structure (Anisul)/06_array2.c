#include <stdio.h>
typedef struct student{
    char name[50];
    int age;
    float salary;
} std;

int main(){
    std per[4];

    for(int i=0; i<4; i++){
        printf("\nThe information of person:%d",i+1);
        printf("\nInput name:");
        scanf("%s",&per[i].name);
        printf("Input Age: ");
        scanf("%d",&per[i].age);
        printf("Input Salary: ");
        scanf("%f",&per[i].salary);
    };

    for(int i=0; i<4; i++){
        printf("\n\nAll the information of %d person:",i+1);
        printf("\nThe name is: %s",per[i].name);
        printf("\nThe age is: %d",per[i].age);
        printf("\nThe Salary is: %.2f",per[i].salary);
    }

    return 0;
}