#include <stdio.h>
int main(){
    FILE *file7;
    char name1[50];
    char name2[50];

    file7 = fopen("test4.txt","r");
    
    if(file7==NULL){
        printf("File doesn't exist\n");
    }

    else{
        printf("File is opened\n");

        fscanf(file7, "%s %s",&name1,&name2);
        printf("%s %s\n",name1,name2);

        fclose(file7);
    }

    return 0;
}