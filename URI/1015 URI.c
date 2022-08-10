#include<stdio.h>
#include<math.h>

int main ()
{
     double x1, y1, x2, y2, p1, p2, distance;

    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    p1 = x2 - x1;

    p2= y2 - y1;

    distance = sqrt(pow(p1,2) + pow(p2,2));

    printf("%.4lf\n",distance);

    return 0;


}
