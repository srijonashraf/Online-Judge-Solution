#include<stdio.h>

int main()

{
    char dash, line;

    dash = '-';
    line = '|';

    printf("%c-------------------------------------%c\n",dash,dash);
    printf("%c%38c\n",line,line);
    printf("%c%38c\n",line,line);
    printf("%c%38c\n",line,line);
    printf("%c%38c\n",line,line);
    printf("%c%38c\n",line,line);
    printf("%c-------------------------------------%c\n",dash,dash);

    return 0;

}
