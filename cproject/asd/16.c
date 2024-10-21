#include <stdio.h>

int main(void)
{
    int input_number=0, sum =0;

    while(1){
        printf("합할 정수 입력 >>");
        scanf("%d", &input_number);

        if(input_number==-1){
            break;
        } else {
            sum+=input_number;
        }
    }
    printf("정수의 누적합은 %d 입니다\n",input_number);
    return 0;
}