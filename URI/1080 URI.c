#include<stdio.h>

int main()

{
    int i,j=0,max=0;
    int n;

    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);

    if(max<n)
    {
        max=n;
        j=i;

    }
    }
    printf("%d\n%d\n",max,j);

    return 0;
}
