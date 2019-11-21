#include <stdio.h>

int main() {
    char s;
    double fixed,sold,total;
    scanf("%s %lf %lf",&s,&fixed,&sold);
    total=fixed+(sold*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
