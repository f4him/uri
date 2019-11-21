#include <stdio.h>

int main() {
    int R;
    double vol,pi;
    pi=3.14159;
    scanf("%d",&R);
    vol=4*pi*R*R*R/3;
    printf("VOLUME = %.3f\n",vol);

    return 0;
}
