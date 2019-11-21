#include<stdio.h>
int main() {
    int T,i,count=0;
    scanf("%d",&T);
    int num[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<T;i++)
    {
    if(num[i]>=10&&num[i]<=20)
    {
    count++;
    }
    }
    printf("%d in\n%d out\n",count,T-count);
}
