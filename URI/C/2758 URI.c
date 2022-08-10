#include<stdio.h>
#include<math.h>

int main()

{
    float A,B;
    double C,D;

    scanf("%f%f",&A,&B);
    scanf("%lf%lf",&C,&D);

    printf("A = %.6lf, B = %.6lf\n",A,B);
    printf("C = %.6lf, D = %.6lf\n",C,D);
    printf("A = %.1lf, B = %.1lf\n",A,B);
    printf("C = %.1lf, D = %.1lf\n",C,D);
    printf("A = %.2lf, B = %.2lf\n",A,B);
    printf("C = %.2lf, D = %.2lf\n",C,D);
    printf("A = %.3lf, B = %.3lf\n",A,B);
    printf("C = %.3lf, D = %.3lf\n",C,D);
    printf("A = %.3E, B = %.3E\n",A,B);
    printf("C = %.3E, D = %.3E\n",C,D);
    printf("A = %.0f, B = %.0f\n",A,B);
    printf("C = %.0f, D = %.0f\n",C,D);

    return 0;

}
