#include <stdio.h>
int main(){
    typedef struct car{
        char name[20];
        char model[30];
        int price;
        float speed;
    }car;

    car c1;
    strcpy(c1.name, "Totoya");
    strcpy(c1.model, "2XBM4D2024");
    c1.price = 1600000;
    c1.speed = 93.4;

    printf("\n\nThe name of the 2nd car is: %s\n",c1.name);
    printf("The model of the 2nd car is: %s\n",c1.model);
    printf("The prince of the 2nd car is: %d\n",c1.price);
    printf("The speed of the 2nd car is: %.2f\n", c1.speed);

    car c2;
    strcpy(c2.name, "Mahendro");
    strcpy(c2.model, "XBMO25XZ2025");
    c2.price = 1200000;
    c2.speed = 89.3;

    printf("\n\nThe name of 1st car is: %s\n",c2.name);
    printf("The model of 1st car is: %s\n", c2.model);
    printf("The price of the car is: %d\n", c2.price);
    printf("The speed of the 1st car is: %.2f\n", c2.speed);

    return 0;
}