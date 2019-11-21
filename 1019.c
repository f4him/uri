#include <stdio.h>
//100,50,20,10,5,2,1
int main() {

    int X,h,m,s;
    scanf("%d",&X);
    h=X/3600;
    X%=3600;
    m=X/60;
    X%=60;
    s=X;


    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
