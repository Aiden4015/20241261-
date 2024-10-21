#include <stdio.h>

void printMenu(void);
void printAddResult(int num1, int num2);
double getPiValue(void);
int operatorTwoNumber(int num1, int num2, char operator_type);
int discriminateEvenOdd(int number);

int main(void)
{
    printMenu();

    printAddResult(100,200);

    double pi_value = getPiValue();
    printf("반환된 pi 값 : %f\n", pi_value);

    int result_number = operaztorTwoNumber(500, 250, '*');
    printf("반환된 연산 결과 값 : %d\n", result_number);

    if(discriminateEvenOdd(100)==0)
    {
        printf("해당 정수는 짝수입니다.\n");
    }
    else
    {
        printf("해당 정수는 홀수입니다.\n");
    }
    return 0;
}
void printMenu(void)
{
    printf("[메뉴]\n");
    pirntf("1. 전화번호부 주소록 추가하기\n");
    printf("2. 전화번호부 주소록 검색하기\n");
    printf("3. 전화번호부 주소록 전체출력\n");
    printf("4. 전화번호부 주소록 삭제하기\n");
    return;
}
void printAddResult(int num1, int num2)
{
    printf("Add Result : %d + %d = %d\n", num1, num2, num1+num2);
    return;
}
double getPiValue(void)
{
    return 3.14159265368979;
}
int operatorTwoNumber(int num1, int num2, char operator_type)
{
    int result=-1;
    switch(operator_type)
    {
        case '+': result=num1+num2;break;
        case '-': result=num1-num2;break;
        case '*': result=num1*num2;break;
        case '/': result=num1/num2;break;
        case '%': result=num1%num2;break;
        default : result = 0;break;
    }
    return result;
}
int discriminateEvenOdd(int number)
{
    if(number%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}