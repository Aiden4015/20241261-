#include <stdio.h>

int main(void)
{
    int age = 0;
    double height = 0.0;
    double weight = 0.0;
    double bmi_value = 0.0;

    printf("당신의 나이, 키, 몸무게를 \"나이/키/몸무게\" 와 같은 형식으로 입력하세요 >>");
    scanf("%d/%lf/%lf",&age,&height,&weight);

    bmi_value =  weight / (height*height*0.001);
    printf("당신의 bmi 지수는 [%f] 입니다\n",bmi_value);
    return 0;
}