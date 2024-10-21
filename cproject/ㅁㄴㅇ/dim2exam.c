#include <stdio.h>

int main(void)
{
    const int student_count =5;
    const int score_count = 5;
    char * student_list[5]={"고길동", "박희동","또치","도우너","둘리"};
    int score[6][6]={0,};
    
    for(int i=0;i<student_count;i++) // 행 순회(학생별)
    {
        for(int j=0;j<score_count;j++){ // 열 순회(점수별)
            printf("[%s] 학생의 %d번째 과목 점수를 입력하세요 >> ",student_list[i],(j+i));
            scanf("%d",&score[i][j]);
        }
    }
    
    for(int i=0;i<student_count;i++) // 행 순회(학생별)
    {
        for(int j=0;j<score_count;j++){ // 열 순회(점수별)
            printf("[%s] 학생의 %d번째 과목 점수 >> [%d]\n ",student_list[i],(j+i),score[i][j]);
        }
    }

    // 행/열 통계량 계산
    for(int i=0;i<student_count;i++) // 행 순회(학생별)
    {
        for(int j=0;j<score_count;j++){ // 열 순회(점수별)
            //학생별 점수 누적
            score[i][score_count]=score[i][score_count]+score[i][j];
            //과목별 점수 누적
            score[score_count][i]=score[score_count][i]+score[j][i];
        }
    }
    return 0;

    for(int i=0; i <student_count;i++)
    {
        printf("[%s]학생의 모든 과목 합계 (%d) / 평균 (%d)\n", student_list[i],score[i][student_count]);

    for(int i=0;i<student_count;i++)
    {
        printf("과목%d의 합계(%d) / 평균(%d)\n",i,score[student_count][i],score[1][student_count]/student_count);    }
    }
}