/*programmers Lv0: 나이 출력*/
#include <Stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age){
    int answer = 0;
    
    //2022년 기준으로 출생 연도 구하기
    answer = 2022 - age + 1;

    return answer;
}
