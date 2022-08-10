#include<stdio.h>

int main()

{
    int t,i,j,count=0;
    int arr[2000];

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<t; i++)
    {
        for(j=i+1; j<t; j++)
        {

            if(arr[i] == arr[j])
            {
                count++;

            }
        }
    }
    printf("%d",count);

}
