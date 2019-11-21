#include <stdio.h>
//100,50,20,10,5,2,1
int main() {

    int X,year,month,days;
    scanf("%d",&X);
    year=X/365;
    X%=365;
    month=X/30;
    X%=30;
    days=X;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,days);
    return 0;
}
