#include <stdio.h>

int main(void)
{
    float f_result = 0.0f;
    double d_result = 0.0;

    int i = 0;

    for(i=0; i<1000; i++)
    {
        f_result=f_result+0.1f;
    }
    printf("float 자료형 누적 합 결과 : %f\n",f_result);

    for(i=0;i<1000;i++)
    {
        d_result=d_result+0.1;
    }
    printf("double 자료형 누적 합 결과 : %f\n",d_result);
    return 0;
}