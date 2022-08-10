#include<stdio.h>
#include<math.h>

int main()
{

    char ch;
    double fixed_slry,total_sell,total;

    scanf("%s %lf %lf",&ch,&fixed_slry,&total_sell);

    total = (fixed_slry +(total_sell*.15));

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;

}
