#include <stdio.h>

double GetBMIValue (double height, double weight)
{
    return weight / (height*height*0.0001);
}

int main(void)
{
    printf("김진호의 bmi 지수는 [%f] 입니다\n",GetBMIValute(175.1,71,4));

    printf("임터보의 bmi 지수는 [%f] 입니다\n",GetBMIValue(171.1,65.7));

    printf("최부자의 bmi 지수는 [%f] 입니다\n",GetBMIValue(180.1,78.3));
    return 0;
}