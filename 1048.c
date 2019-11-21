#include<stdio.h>
int main()
{
float s,a,b,c,d,e,m;
a=0.15;
b=0.12;
c=0.1;
d=0.07;
e=0.04;
scanf("%f",&s);
if(s<=400)
{
m=s+s*a;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",m,m-s);
}
else if(s<=800)
{
m=s+s*b;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",m,m-s);
}
else if(s<=1200)
{
m=s+s*c;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",m,m-s);
}
else if(s<=2000)
{
m=s+s*d;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",m,m-s);
}
else if(s>2000)
{
m=s+s*e;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",m,m-s);
}
return 0;
}