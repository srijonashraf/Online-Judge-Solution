/*1. 1/2*Vhumi*ucchota
2. pi*r*r
3. (a+b/2)*h
4. a*a
5. a*b */

#include<stdio.h>

int main()
{
    float A,B,C,tri,radi,trap,squ,rect;

    scanf("%f%f%f",&A,&B,&C);

    tri = 0.5*A*C;
    radi = 3.14159*C*C;
    trap = ((A+B)/2)*C;
    squ = B*B;
    rect = A*B;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tri,radi,trap,squ,rect);

    return 0;

}
