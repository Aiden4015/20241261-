#include <stdio.h>

// 학생 구조체 정의
struct Student {
    char name[50];
    int id;
    int scores[3]; // 세 과목의 점수
    float average;
};

//함수 선언
void inputStudent(struct Student *s);
void calculateAverage(struct Student *s);
void printStudent(struct Student *s);

int main(void){
    // 학생 수를 정의
    int numStudents;
    printf("학생 수를 입력하세요 : ");
    scanf("%d",&numStudents);

    // 학생 배열을 동적으로 할당
    struct Student students[numStudents];

    // 학생 정보 입력
    for (int i=0; i< numStudents; i++){
        printf("\n학생 정보를 입력하세요 %d:\n",i+1);
        inputStudent(&students[i]);
        calculateAverage(&students[i]);
    }

    //학생 정보 출력
    printf("\nStudents Details:\n");
    for (int i = 0; i < numStudents; i++){
        printStudent(students[i]);
    }

    return 0;
}
// 학생 정보 입력 함수
void inputStudent(struct Students *s){
    printf("학생 이름을 입력하세요 : ");
    scanf("%49s", s->name);
    printf("학생 ");
    scanf("%d", &s->id);
    for (int i = 0; i<3; i++){
        printf("과목 점수를 입력하세요 %d: ",i+1);
        scanf("%d",&s->scores[i]);
    }
}