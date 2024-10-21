#include <stdio.h>

int main(void)
{
    char str[50];
    str_len=0;

    printf("영단어를 입력하세ㅛ >> ");
    scanf("%s",str);

    printf("[%s]\n",str);

    for(str_len=0; str[str_len]!='\0';str_len++);
    {

    }
    printf("단어[%s]의 길이는 [%d]입니다.\n", str, str_len);
    return 0;
}
/*
{
    int score[5];
    int sum_score=0;
    for(int i=0;i<5;i++)
    {
        printf("점수를 입력하세요(%d번째)->",i+1);
        scanf("%d",&score[i]);
    }
     for(int i=0;i<5;i++)
    {
        printf("(%d번째)[%d]\n",i+1,score[i]);
        sum_score+=score[i];
    }
    printf("당신의 평균 점수는 %d점 \n",sum_score/5);
    return 0;
}
*/
