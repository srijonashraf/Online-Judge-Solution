#include<stdio.h>

int main()

{
     char dash = '-';
     char line = '|';

     printf("%c-------------------------------------%c\n",dash,dash);
     printf("%cx = 35%32c\n",line,line);
     printf("%c%38c\n",line,line);
     printf("%c               x = 35%17c\n",line,line);
     printf("%c%38c\n",line,line);
     printf("%c                               x = 35%c\n",line,line);
     printf("%c-------------------------------------%c\n",dash,dash);

     return 0;

}
