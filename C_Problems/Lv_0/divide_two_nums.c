./*programmers Lv0: 두 수의 나눗셈*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2){
    int answer = 0;
    float answer1 = 0.0f;

    //num1을 num2로 나누고 1000곱하-이때 정수 나눗셈 연산이 아닌 부동 소수점기반으로 나눗셈 연산이 되게 캐스팅
    answer1 = ( (float)num1 / (float)num2 ) * 1000;

    //1000을 곱해도 소수점이 있을 경우 해당 소수점 버리기
    answer = (int)answer1;

    return answer;
}


