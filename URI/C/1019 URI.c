#include<stdio.h>

int main()

{
    int N,h,m,s;

    scanf("%d",&N);                     /* Suppose N = 140153

                                           3600|140153|38
                                                136800
                                                ......
                                                 60|3353|55
                                                    3300
                                                    ....
                                                     53  */


    h = N/3600;
    m = N%3600/60;
    s = N%3600%60;

    printf("%d:%d:%d\n",h,m,s);

    return 0;

}
