#include <stdio.h>
typedef struct stdunt{
    char name[50];
    int age;
    float mark;
} std;

int main(){

    std s[3];

    for(int i=0; i<3; i++){
        printf("\nInput information for %d",i+1);
        printf("\nEnter the name: ");
        scanf("%s",&s[i].name);
        printf("Input The age: ");
        scanf("%d",&s[i].age);
        printf("Input the mark: ");
        scanf("%f",&s[i].mark);
    }

    for(int i=0; i<3; i++){
        printf("\n\nAll information of person: %d",i+1);
        printf("\nName is: %s",s[i].name);
        printf("\nAge is: %d",s[i].age);
        printf("\nMark is: %f",s[i].mark);
    }

    return 0;
}