#include <stdio.h>

int solution(int a, int b);

int main(void)
{
    int num1, num2;
    int result;

    printf("Enter a two integers(a, b): ");
    scanf("%d %d", &num1, &num2);

    result = solution(num1, num2);

    printf("Result of integer concat: %d\n", result);

    return 0;
}

int solution(int a, int b)
{
    int tmp, tmp1, tmp2;

    int a_cnt = 0;
    int b_cnt = 0;
    int answer = 0;
    
    tmp = a;
    while(tmp / 10 > 0) {
        tmp /= 10;
        a_cnt++;
    }
    
    tmp = b;
    while(tmp / 10 > 0) {
        tmp /= 10;
        b_cnt++;
    }
    
    tmp = b;
    for(int i = 0; i < a_cnt + 1; i++) {
        tmp *= 10;
    }
    tmp1 = tmp + a;

    tmp = a;
    for(int i = 0; i < b_cnt + 1; i++) {
        tmp *= 10;
    }
    tmp2 = tmp + b;

    return (tmp1 > tmp2 ? tmp1:tmp2);
}
    
