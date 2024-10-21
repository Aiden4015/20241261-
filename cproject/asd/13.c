#include <stdio.h>

int main(void)
{
    int a=0;
    for(int i;i<=100;i++){
        a+=i;
    }
    printf("1부터 100까지의 누적합은 %d\n",a);
    return 0;
}