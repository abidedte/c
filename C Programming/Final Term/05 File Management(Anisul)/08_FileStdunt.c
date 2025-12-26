#include <stdio.h>
int main(){

    FILE *file8;

    char name[50];
    int age, phoneNumber, i,n;

    file8 = fopen("student.txt", "a");

    if(file8 == NULL){
        printf("File does not exist");
    }

    else{
        printf("File is opened\n");

        printf("Enter number of student: ");
        scanf("%d", &n);

        for(int i=1; i<=n; i++){


        printf("Enter the name of student: ");
        scanf("%s",&name);

        printf("Enter the age of student: ");
        scanf("%d", &age);

        printf("Enter student phone number: ");
        scanf("%d",&phoneNumber);

        fprintf(file8,"%s \t\t %d\t\t%d\n", name,age,phoneNumber);

        }

        fclose(file8);

    }


    return 0;
}