#include <stdio.h>

int main(void)
{
    int number1=100;
    int number2=200;
    int sum_result=number1+number2;
    int twice_result=sum_result*2;
    printf("%d+%d=%d\n",number1,number2,sum_result);
    printf("%dx2=%d\n",sum_result,twice_result);
    return 0;
}