#include <stdio.h>

int main(void)
{
    int num=100;
    int *prt1 =&num;
    int *prt2=prt1;
    (*prt1)++;
    (*prt2)++;
    printf("%d\n",num);
    return 0;
}