#include <stdio.h>

int main(void)
{
    int int_number=200000000;
    unsigned int int_u_number = 4200000000u;
    long long_number=200000001;
    long long double_long_number=20000000000;
    printf("%%d로만 출력 하 - int_number[%d], long_number[%d], double_long_number[%d]\n", int_number, long_number,double_long_number);
    printf("다양한 서식 이용 - int_number[%ld],double_long_number[%lld]\n",int_number,long_number,double_long_number);

    int my_age=15;
    printf("나의 나이는 %d살 이기도 하고, %o살 이기도 하고, %x살 이기도 해요\n",my_age,my_age,my_age);

    float float_value = 1.1f;
    double double_value=1.1;
    long double long_double_value = 1.1l;

    printf("float_value :   %.22f\n",float_value);
    printf("double_value :  %.22f\n",double_value);
    printf("long_double_value : %.22Lf\n",long_double_value);

    double e_double_value0 = 1.23;
    double e_double_value1 = 0.123, e_double_value2 = 0.0123;
    double e_double_value3 = 0.00123, e_double_value4 = 0.000123;

    double g_double_value1 = 1.23e-3, g_double_value2=1.23e-4;
    double g_double_value3 = 1.23e-5, g_double_value4=1.23e-6;

    printf("e_double_value0 : %e\n",e_double_value0);
    printf("e_double_value1 : %e\n", e_double_value1);
    printf("e_double_value2 : %e\n",e_double_value2);
    printf("e_double_value3 : %e\n",e_double_value3);

    printf("g_double_value1 : %g\n",g_double_value1);
    printf("g_double_value2 : %g\n",g_double_value2);
    printf("g_double_value3 : %g\n",g_double_value3);
    printf("g_double_value4 : %g\n",g_double_value4);

    int c_int_number = 65;
    short c_short_number = (short)65;
    char c_char_number = (char)65;

    printf("c_int_number : %d / %c\n",c_int_number,c_int_number);
    printf("c_short_number : %d / %c\n", c_short_number,c_short_number);
    printf("c_char_number : %d / %c\n", c_char_number,c_char_number);

    char str[10]="abcde";
    printf("문자열을 담은 변수 std : %s\n",str);
    printf("문자열 상수 : %s\n", "abcdefgh");

    int int_data=100;
    void* void_pointer = (void*)&int_data;
    printf("void * void_pointer : %p\n",void_pointer);

    printf("|%5d|\n",123);
    printf("|%-5d|\n",123);
    printf("%.10f\n",1.12345);

    return 0;
}