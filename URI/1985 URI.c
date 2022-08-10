#include<stdio.h>

int main()
{
    int t,k,n,s,l,q;
    double sum=0;
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&s,&q);

        if(s==1001)
            sum +=q*1.50;
        else if(s==1002)
                sum +=q*2.50;
        else if(s==1003)
                sum +=q*3.50;
        else if(s==1004)
                sum +=q*4.50;
        else if(s==1005)
                sum +=q*5.50;

    }

        printf("%.2lf\n",sum);

        return 0;
}
