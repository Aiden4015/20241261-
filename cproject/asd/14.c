#include <stdio.h>
int main(void)
{
    int row=0, col=0;
    printf("출력할 단을 입력하세요 >>>");
    scanf("%d",&col);

    printf("출력할 줄을 입력하세요 >>>");
    scanf("%d",&row);

    for(int i;i<row+1;i++){
        printf("%d x %d = %d\n",col,i,col*i);
    }
    return 0;
}