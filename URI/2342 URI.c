#include<stdio.h>

int main()

{
    unsigned limit,n1,n2;                       // =,-,*,/ nite hole operator variable nite hobe ar baki man gulor unsigned variabler moddhe hobe
    char operator;
    scanf("%u",&limit);
    scanf("%u %c %u",&n1,&operator,&n2);

    if(operator == '+')

        if(n1+n2>limit)

            printf("OVERFLOW\n");

        else {printf("OK\n");}


     else

         if(n1*n2>limit)

             printf("OVERFLOW\n");

         else

             printf("OK\n");


    return 0;

}
