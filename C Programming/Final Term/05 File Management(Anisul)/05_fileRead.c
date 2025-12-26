#include <stdio.h>
int main(){
    FILE *file5;
    file5 = fopen("test4.txt", "r");

    char ch;

    if(file5 == NULL){
        printf("File doesn't exist");
    }

    else{
        printf("File is opened");

        while(!feof(file5)){
            ch = fgetc(file5);
            printf("%c",ch);
        }
        fclose(file5);
    }

    return 0;
}