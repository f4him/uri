#include<stdio.h>
int main()
{
int a,b,c,t,t1,t2;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
    t=a;
    if(b>c){
        t1=b;
        t2=c;
    }
        else
     {

     t1=c;
     t2=b;
     }
}
if(b>a&&b>c)
{
    t=b;
    if(a>c){
        t1=a;
        t2=c;}
        else{
        t1=c;
        t2=a;}
}
if(c>b&&c>a)
{
    t=c;
    if(a>b){
        t1=a;
        t2=b;}
        else{
        t1=b;
        t2=a;}
}
printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",t2,t1,t,a,b,c);
return 0;
}
