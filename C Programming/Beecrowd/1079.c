#include <stdio.h>
int main(){
    int n;
    float x,y,z;
    float avr=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%f %f %f",&x,&y,&z);
        avr=(x*2+y*3+z*5)/10;
        printf("%.1f\n",avr);
    }

    return 0;
}