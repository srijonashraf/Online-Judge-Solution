#include<stdio.h>

int main()

{   int i,a=0,g=0,d=0,n;

    for(i=1;;i++)
    {
        scanf("%d",&n);

            if(n==4)
            {
                break;
            }

            else{

            if(n==1)
                a+=1;

            if(n==2)
                g+=1;

            if(n==3)
                d+=1;

            }


        }


    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);

    return 0;
}
