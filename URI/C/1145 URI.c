#include<stdio.h>

int main()

{
     int x,y,j,i=0;

     scanf("%d %d",&x,&y);

     for(j=1;j<=y;j++)
     {
        i+=1;
       if(i<x)
        printf("%d ",j);
      else if(i==x)
        {printf("%d\n",j);i=0;}



    }



    return 0;
}
