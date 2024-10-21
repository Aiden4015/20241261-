#include <stdio.h>

int main(void)
{
    int a=5;
    for(int i;i<a;i++){
        for(int j;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}