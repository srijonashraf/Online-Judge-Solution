#include<stdio.h>

int main()

{
    float A,B,C,porishima,area;

    scanf("%f%f%f",&A,&B,&C);

    if(A+B>C && A+C>B && B+C>A && C+B>A)
    {
        porishima = A+B+C;

        printf("Perimetro = %.1f\n",porishima);
    }

    else
    {
        area = 0.5*(A+B)*C;

        printf("Area = %.1f\n",area);
    }

    return 0;
}
