#include<stdio.h>

int main()

{
    int n,i,j,result;

    scanf("%d",&j);


    for(i=1;i<=j;i++)
    {
        scanf("%d",&n);
        if(n==1 || n==2)
            printf("0\n");

        else
           {
            result= (n-1)/2;
            printf("%d\n",result);

    }

   }
    return 0;

}

