#include<stdio.h>

int main()
{

    int n,k,code,i,j;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&code);

            if(code==1)
                printf("Rolien\n");

            else if(code==2)
                printf("Naej\n");

            else if(code==3)
                printf("Elehcim\n");

            else
                printf("Odranoel\n");

        }

    }

    return 0;
}
