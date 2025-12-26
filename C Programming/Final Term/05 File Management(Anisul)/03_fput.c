#include <stdio.h>
int main(){
    FILE *file3;
    file3 = fopen("test3.txt","a");

    char name[100];

    if(file3 == NULL){
        printf("The file is not opened\n");
    }
    else{
        printf("The is opened successfully\n");
        printf("Enter the name of your university: ");
        gets(name);

        fputs(name, file3);
        fputs("\n",file3);
        printf("File is written succussfully\n");
        fclose(file3);
    }

    return 0;
}  