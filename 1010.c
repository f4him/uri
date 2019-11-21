#include <stdio.h>

int main() {
    int code_1,code_2,num_1,num_2;
    float price_1,price_2,total;
    scanf("%d %d %f",&code_1,&num_1,&price_1);
    scanf("%d %d %f",&code_2,&num_2,&price_2);
    total=num_1*price_1+num_2*price_2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
