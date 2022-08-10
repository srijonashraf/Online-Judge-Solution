#include<stdio.h>

int main()

{
    int time,speed,s;
    float liters;

    scanf("%d %d",&time,&speed);

    s = speed*time;

    liters= 0.083333*s;

    printf("%.3f\n",liters);

    return 0;


}
