#include<stdio.h>

int main()
{
    double n1,n2;

    n1 = 234.345;
    n2 = 45.698;

    printf("%.6lf - %.6lf\n",n1,n2);
    printf("%.0lf - %.0lf\n",n1,n2);
    printf("%.1lf - %.1lf\n",n1,n2);
    printf("%.2f - %.2f\n",n1,n2);
    printf("%.3lf - %.3lf\n",n1,n2);
    printf("%e - %e\n",n1,n2);
    printf("%E - %E\n",n1,n2);
    printf("%.3f - %.3f\n",n1,n2);
    printf("%.3f - %.3f\n",n1,n2);


    return 0;

}
