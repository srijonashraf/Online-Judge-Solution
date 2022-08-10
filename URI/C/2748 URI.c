#include<stdio.h>
#include<string.h>
int main()

{
    char dash, line;
    char name [] = "Roberto";
    char num [] = "5786";
    char name2 [] = "UNIFEI";
    dash = '-';
    line = '|';


    printf("%c-------------------------------------%c\n",dash,dash);

    printf("%c%15s%23c\n",line,name,line);        //string er khetre %er porer songkha string er sesh word porjonto hoy
    printf("%c%38c\n",line,line);
    printf("%c%12s%26c\n",line,num,line);
    printf("%c%38c\n",line,line);
    printf("%c%14s%24c\n",line,name2,line);
    printf("%c-------------------------------------%c\n",dash,dash);

   return 0;

}

