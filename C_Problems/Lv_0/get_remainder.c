/*programmers Lv0: 나머지 구하기*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2){
    int answer = -1;
    
    //num1을 num2로 나눈 나머지 값 answer에 assign
    answer = num1 % num2;

    return answer;
}
