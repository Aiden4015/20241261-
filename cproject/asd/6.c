#include <stdio.h>

int main(void)
{
    char ch1='A';
    char ch2=65;

    short short_number=123;
    int integer_number=210000000;

    double double_data1=1.1234567;
    double double_data2=1.1234567899999;

    printf("char ch1 : %d\n",ch1,ch1);
    printf("char ch2 : %d\n",ch2,ch2);

    printf("short short_number : %d\n",short_number);
    printf("int integer_number : %d\n",integer_number);

    printf("double double_data1 : %.15f\n",double_data1);
    printf("double double_data2 : %.15f\n",double_data2);
    return 0;

}