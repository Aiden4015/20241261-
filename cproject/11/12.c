/*
11 ~ 99 까지 결과를 저장하는데
저장할때 곱셈은 메인이아닌 함수에서 계산하여야한다.
정수형 2차배열을 만들어서
단을 구분할수있도록 엔터를 추가해줘야한다. 

(힌트) 2중fo`r 문이 필요하다.
형식
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
*/
#include <stdio.h>

int gugugu(int a, int b)
{
    return a*b;
}
int main (void)
{
    int gugudan[3][9];
    int front = sizeof(gugudan)/sizeof(gugudan[0]);
    int back = sizeof(gugudan[0])/sizeof(int);
    for(int i=0; i<front;i++)
    {
        for(int j=0; j<back;j++)
        {
            gugudan[i][j]=gugugu(i+1,j+1);
            printf("%d * %d = %d\n",i+1,j+1,gugudan[i][j]);
        }
        printf("\n");
    }
    return 0;
}