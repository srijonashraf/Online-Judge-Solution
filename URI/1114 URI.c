#include<stdio.h>

int main()
{
    int n,i;

    for(i=1;;i++)

    {
        scanf("%d",& n);

        if(n==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
