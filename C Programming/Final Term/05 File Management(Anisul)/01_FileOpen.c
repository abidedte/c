#include <stdio.h>
int main(){
    FILE *wow;

    wow = fopen("msword.txt", "w");

    if(wow == NULL) printf("The file is not opened");

    else{
        printf("\nThe file is opened");
        fclose(wow);
    }
    return 0;
}