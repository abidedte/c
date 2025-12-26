#include <stdio.h>
int main(){
    FILE *wow2;
    wow2 = fopen("labfinal.txt", "a");

    char name[40];
    int age;
    
    if(wow2 == NULL){
        printf("The file is not opened");
    }

    else{
        printf("\nThe file is opened");
        printf("\nInput the name: ");
        gets(name);

        printf("\nInput the age: ");
        scanf("%d",age);

        fprintf(wow2, "Name is: %s, Age is: %d\n", name, age);
        printf("\nThe file is written successfully\n");
        fclose(wow2);
    }

    return 0;
}