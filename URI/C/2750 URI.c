#include<stdio.h>

int main()

{
    int dec [] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int oct [] = {0,1,2,3,4,5,6,7,10,11,12,13,14,15,16,17};
    char hex [] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    printf("|%7d    |%5d    |%8c       |\n",dec[0],oct[0],hex[0]);
    printf("|%7d    |%5d    |%8c       |\n",dec[1],oct[1],hex[1]);
    printf("|%7d    |%5d    |%8c       |\n",dec[2],oct[2],hex[2]);
    printf("|%7d    |%5d    |%8c       |\n",dec[3],oct[3],hex[3]);
    printf("|%7d    |%5d    |%8c       |\n",dec[4],oct[4],hex[4]);
    printf("|%7d    |%5d    |%8c       |\n",dec[5],oct[5],hex[5]);
    printf("|%7d    |%5d    |%8c       |\n",dec[6],oct[6],hex[6]);
    printf("|%7d    |%5d    |%8c       |\n",dec[7],oct[7],hex[7]);
    printf("|%7d    |%5d    |%8c       |\n",dec[8],oct[8],hex[8]);
    printf("|%7d    |%5d    |%8c       |\n",dec[9],oct[9],hex[9]);
    printf("|%7d    |%5d    |%8c       |\n",dec[10],oct[10],hex[10]);
    printf("|%7d    |%5d    |%8c       |\n",dec[11],oct[11],hex[11]);
    printf("|%7d    |%5d    |%8c       |\n",dec[12],oct[12],hex[12]);
    printf("|%7d    |%5d    |%8c       |\n",dec[13],oct[13],hex[13]);
    printf("|%7d    |%5d    |%8c       |\n",dec[14],oct[14],hex[14]);
    printf("|%7d    |%5d    |%8c       |\n",dec[15],oct[15],hex[15]);
    printf("---------------------------------------\n");

    return 0;

}
