#include <stdio.h>
#define PI 3.141215

int main(void)
{
    printf("%f\n",PI);
    return 0;
}
/*#include <stdio.h>

int main(void)
{
    // 1. 스트림 생성(입력 혹은 출력)
    FILE * ofile = fopen("./text.txt","wt");
    // 2. 파일에 문자열 출력
    fputs("Hello, Welcome My Summer Vacation", ofile);
    // 3. 파일 스트림 소멸(파일 닫기)
    fclose(ofile);
    // 4. 스트림 생성 -> 입력 스트림
    FILE * ifile=fopen("./text.txt","rt");
    if(ifile==NULL){
        printf("해당 파일이 존재하지 않습니다\n");
        return 0;
    }
    char str[100];
    // 5. 파일로부터 문자열 읽기(1줄)
    fgets(str, sizeof(str), ifile);
    
    // 6. 읽어온 값을 출력
    printf("%s\n",str);
    
    // 7. 입력 스트림 소멸
    fclose(ifile);   
    return 0;
}*/