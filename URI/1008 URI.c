#include<stdio.h>

int main()
{
    int number,salary;
    float hours,total;

    scanf("%d%d",&number,&salary);
    scanf("%f",&hours);

    total = salary*hours;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,total);


    return 0;

}
