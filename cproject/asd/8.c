#include <stdio.h>

int main(void)
{
    char char_num1=1,char_num2=2,char_result=0;
    short short_num1=100,short_num2=200,short_result=0;

    printf("char char_num1의 사이즈 : %d\n",sizeof(char_num1));
    printf("char char_num2의 사이즈 : %d\n",sizeof(char_num2));

    printf("short short_num1 사이즈 : %d\n",sizeof(short_num1));
    printf("short short_num2 사이즈 : %d\n",sizeof(short_num2));

    printf("(char_num1+char_num2) 결과 사이즈 : %d\n",sizeof(char_num1+char_num2));
    printf("(short_num1+short_num2) 결과 사이즈 : %d\n",sizeof(short_num1+short_num2));

    char_result=char_num1+char_num2;
    short_result=short_num1+short_num2;

    printf("char char_result 사이즈 : %d\n", sizeof(char_result));
    printf("short short_result 사이즈 : %d\n",sizeof(short_result));
    return 0;
}