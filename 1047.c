#include<stdio.h>
int main()
{
int h1,h2,m1,m2,h,m;

scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
h=((24-h1)+(h2-0));
m=m2-m1;
if(m<1)
{
    h=h-1;
    m=60+m;
}
if(h>=24)
{
    h=h-24;
}
if(m>=60)
{
    h++;
    m=m-60;
}
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

return 0;
}
