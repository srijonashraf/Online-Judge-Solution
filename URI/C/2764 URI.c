#include<stdio.h>

int main()

{
    char d1,d2,m1,m2,y1,y2;
    char slash1,slash2;
    char dash = '-';
    scanf("%c%c%c%c%c%c%c%c",&d1,&d2,&slash1,&m1,&m2,&slash2,&y1,&y2);

    printf("%c%c%c%c%c%c%c%c\n",m1,m2,slash1,d1,d2,slash2,y1,y2);
    printf("%c%c%c%c%c%c%c%c\n",y1,y2,slash1,m1,m2,slash2,d1,d2);
    printf("%c%c%c%c%c%c%c%c\n",d1,d2,dash,m1,m2,dash,y1,y2);


    return 0;

}


