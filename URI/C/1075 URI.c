#include<stdio.h>

 int main()

 {
     int n;
     int k;

     scanf("%d",&n);

     for(k=1;k<=10000;k++)
     {
         if(k%n==2)
            printf("%d\n",k);
     }

     return 0;
 }
