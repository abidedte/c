#include <stdio.h>
int main(){
    typedef struct bdfootballer{
        int speed;
        int weight;
        char name[20];
    }bdfootballer;

    typedef struct argfootballer{
        bdfootballer p1;
        int height;
    }argfootballer;

    bdfootballer hamza = {99, 70, "HAMZA"};
    bdfootballer jamal = {90, 65, "JAMAL"};

    argfootballer messi;
    messi.p1.speed = 100;
    messi.p1.weight = 75;
    messi.height = 5;
    strcpy(messi.p1.name, "LMTEN");

    printf("\nThe speed of messi: %d",messi.p1.speed);
    printf("\nThe height is: %d",messi.height);
    printf("\nThe weight of messi: %d",messi.p1.weight);
    printf("\nThe name of messi: %s\n\n",messi.p1.name);

    return 0;
}