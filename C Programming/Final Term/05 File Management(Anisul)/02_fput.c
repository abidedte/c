#include <stdio.h>
int  main(){

    FILE *file2;
    file2 = fopen("test2.txt","a");

    char name[50] = " but he has huge dadication to do batter";
    int length = strlen(name);

    if(file2 == NULL){
        printf("File is not exist");
    }
    else{
        printf("File is open\n");
        for(int i=0; i<length; i++){
            fputc(name[i], file2);
        }
        printf("File is written successfully\n");
        fclose(file2);
    }

    return 0;
}
