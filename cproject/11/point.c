#include <stdio.h>

int plus(int a,int b)
{
    return a+b;
}
int main(void)
{
    int i=0;
    int x=0,y=0;
    printf("x");
    scanf("%d",&x);
    printf("y");
    scanf("%d",&y);
    i=plus(x,y);
    printf("%d",i);
    return 0;
}

