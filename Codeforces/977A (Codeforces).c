#include<stdio.h>

int main()
{
    int k,n,i;

    scanf("%d",&n);
    scanf("%d",&k);

    i=0;
    while(i<k)
    {
        if(n%10==0)
            n=n/10;
        else if(n%10!=0)
            n-=1;
        i++;
    }

    printf("%d\n",n);

}
