#include <stdio.h>

int main(void)
{
    char character =10;
    int integer_number=1052;
    double double_number=3.1415;

    printf("변수 character의 크기 : %d\n",sizeof(character));
    printf("변수 integer_number의 크기 : %d\n",sizeof(integer_number));
    printf("변수 double_number의 크기 : %d\n",sizeof double_number);
    return 0;
}