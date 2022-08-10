#include<stdio.h>

int main()
{
    int n;
    int X [1000];
    int i,j;
    int temp =1000;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&X[i]);

        if(temp>X[i])
        {temp=X[i];

            j=i;
        }

    }

    printf("Menor valor: %d\nPosicao: %d\n",temp,j);

    return 0;
}
