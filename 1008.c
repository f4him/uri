#include <stdio.h>

int main() {

    int NUMBER,hr;
    float rate,SALARY;
    scanf("%d %d %f",&NUMBER,&hr,&rate);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,hr*rate);

    return 0;
}