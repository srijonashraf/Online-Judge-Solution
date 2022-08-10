#include<stdio.h>

int main()

{
   int n1,n2,temp,i,j;
   int sum = i;

    for(j=1;;j++)
    {
    scanf("%d%d",&n1,&n2);

        if(n1<=0 || n2<=0)
        {
            break;
        }

    else {

    if(n1<n2)
    {
        temp = n1;
        n1=n2;
        n2=temp;

    }

    else
    {
        n1=n1;
        n2=n2;


    }

    for (i=n2;i<=n1;i++)
    {
        printf("%d ",i);
    }


    for (i=n2;i<=n1;i++)
    {
        sum+=i;
    }

    printf("Sum=%d\n",sum);
    }
        sum=0;
    }

    return 0;
}
