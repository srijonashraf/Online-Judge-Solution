#include<stdio.h>

int main()

{
    int x,y,i,temp;
    int sum = 0;

    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y)
    {
        temp = x;
        x=y;
        y=temp;
    }

    for(i=x;i<=y;i++)

    {
        if(i%13!=0)
        {
            sum+=i;
        }

    }
    printf("%d\n",sum);

    return 0;
}
