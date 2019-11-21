#include<stdio.h>
int main()
{

float A,B,C,temp;
temp=0;

scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&C);
if(A>B)
{
    temp=A;
    A=B;
    B=temp;
}
if(B>C)
{
    temp=B;
    B=C;
    C=temp;
}
if(C>A)
{
    temp=C;
    C=A;
    A=temp;
}
if(A>=B+C)
{
    printf("NAO FORMA TRIANGULO\n");
    return 0;
}
if(A*A==B*B+C*C)
    printf("TRIANGULO RETANGULO\n");
if(A*A>B*B+C*C)
    printf("TRIANGULO OBTUSANGULO\n");
if(A*A<B*B+C*C)
    printf("TRIANGULO ACUTANGULO\n");
if(A==B&&B==C&&C==A)
    printf("TRIANGULO EQUILATERO\n");
if((A==B&&B!=C)||(B==C&&A!=C)||(C==A&&B!=A))
    printf("TRIANGULO ISOSCELES\n");

return 0;
}
