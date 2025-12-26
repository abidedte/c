#include <stdio.h>
int main(){
    FILE *file6;
    file6 = fopen("test4.txt", "r");

    char ch[40];
    
    if(file6 == NULL){
        printf("The file is not exist");
    }
    else{
        printf("File is opend\n");

        while(!feof(file6)){
            fgets(ch,39,file6);
            printf("%s\n",ch);
        }
        fclose(file6);
    }

    return 0;
}