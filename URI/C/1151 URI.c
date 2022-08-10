#include<stdio.h>
int main()
{
int i,range,k;
int arr[46];


scanf("%d",&range);

arr[0]=0;
arr[1]=1;

for(i=2;i<range;i++){
arr[i] = arr[i-1] + arr[i-2];
}

for(i=0;i<range;i++)
{

    printf("%d",arr[i]);

    if(i!=(range-1))
    printf(" ");

}
printf("\n");

return 0;
}
