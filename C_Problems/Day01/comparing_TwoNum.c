/*programmers Lv0: 숫자 비교하기*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2){
    int answer = 0;
    
    answer = ( num1 == num2 )?1:-1;
    return answer;
}
