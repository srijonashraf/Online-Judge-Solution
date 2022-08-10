#include<stdio.h>

int main()

{
    char A,B,C,D,E;
    A = 'A';
    B = 'B';
    C = 'C';
    D = 'D';
    E = 'E';
    printf("%8c\n",A);
    printf("%7c %c\n",B,B);
    printf("%6c   %c\n",C,C);
    printf("%5c     %c\n",D,D);
    printf("%4c       %c\n",E,E);
    printf("%5c     %c\n",D,D);
    printf("%6c   %c\n",C,C);
    printf("%7c %c\n",B,B);
    printf("%8c\n",A);

    return 0;
}
