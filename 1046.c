#include<stdio.h>
int main()
{
int start,end,time;
scanf("%d",&start);
scanf("%d",&end);
time=((24-start)+(end-0));
if(time>24)
{
    time=time-24;
}
printf("O JOGO DUROU %d HORA(S)\n",time);

return 0;
}
