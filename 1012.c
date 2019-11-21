#include <stdio.h>

int main() {
    double A,B,C,pi,t,c,tr,q,r;
    pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    t=A*C/2;
    c=pi*C*C;
    tr=(A+B)*C/2;
    q=B*B;
    r=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",t,c,tr,q,r);
    return 0;
}
