#include <stdio.h>

int main(void)
{
    char pid[7];
    char name[20];
    printf("주민등록번호 앞 6자리 : ");
    fgets(pid, sizeof(pid),stdin);
    printf("이름을 입력하세요 : ");
    fgets(name, sizeof(name),stdin);
    printf("주민등록번호 : %s\n",pid);
    printf("이름 : %s\n", name);
    return 0;
}