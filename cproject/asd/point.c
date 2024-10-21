
#include <stdio.h>

int main(void)
{
    int number=100;
    int *p_number=&number;

    printf("p_number : %p\n", &number);
    printf("p_number 참조 : %p\n", p_number);
    printf("p_number 참조 : %d\n", *p_number);

    return 0;
}