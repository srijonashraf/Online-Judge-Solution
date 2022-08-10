#include<stdio.h>

int main()

{
    int p_1,unit_p1,p_2,unit_p2;
    float price_p1,price_p2,t_p1,t_p2,sub_total;

    scanf("%d%d%f",&p_1,&unit_p1,&price_p1);
    scanf("%d%d%f",&p_2,&unit_p2,&price_p2);

    t_p1 = unit_p1*price_p1;
    t_p2 = unit_p2*price_p2;
    sub_total = t_p1 + t_p2;

    printf("VALOR A PAGAR: R$ %.2f\n",sub_total);

    return 0;

}
