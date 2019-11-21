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
        if(num[i]==0)
        {
            printf("NULL\n");
        }
        else if(num[i]<0)
        {
            if(num[i]%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if(num[i]>0)
        {

            if(num[i]%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");

        }
    }
}
