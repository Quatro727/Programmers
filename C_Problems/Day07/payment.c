#include <stdio.h>

long long solution(int n, int k);

int main(void)
{
    int num1, num2;
    long result;

    scanf("%d %d", &num1, &num2);

    result = solution(num1, num2);

    printf("%lld\n", result);

    return 0;
}

//Caculate total payment
long long solution(int n, int k)
{
    int service;
    long long answer;

    if(n >= 10) {
        service = n / 10 * 2000;
    }
    answer = (long long)n * 12000 + (long long)k * 2000 - service;
    return answer;
}
