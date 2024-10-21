#include <stdio.h>

int main(void)
{
    for(int i=2;i<=3;i++){
        printf("(for %d단 시작)----------\n",i);
        for(int j=1;j<=9;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("(for %d단 끝)------------\n",i);
    }
    return 0;
}