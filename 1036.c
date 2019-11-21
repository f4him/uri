include<stdio.h>

int main()
{
    float A,B,C,d1,d2,e;
    scanf("%f%f%f",&A,&B,&C);
    e=B*B-4*A*C;
    if(e<0||A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {

        d1=(-B+sqrt(e))/(2*A);
        d2=(-B-sqrt(e))/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n",d1,d2);
    }

    return 0;
}