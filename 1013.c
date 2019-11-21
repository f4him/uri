#include <stdio.h>

int main() {
    int a,b,c,max1,max2;
    scanf("%d%d%d",&a,&b,&c);
    max1=(a+b+abs(a-b))/2;
    max2=(c+max1+abs(c-max1))/2;
    printf("%d eh o maior\n",max2);
    return 0;
}
