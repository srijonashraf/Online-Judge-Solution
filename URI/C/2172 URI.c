#include<stdio.h>

int main()
{

    int x,y,i,ans;

    for(i=1;;i++)
    {
        scanf("%d %d",&x,&y);

        if(x==0 && y==0)
        {
            break;
        }
        else
        {
            ans = x*y;
            printf("%d",ans);
        }
    }

    return 0;
}
