#include <stdio.h>

int solution(int n);

int main(void)
{
    int num;
    int result;

    printf("Enter a integer: ");
    scanf("%d", &num);

    printf("Total sum of digits in input number: %d\n", solution(num));

    return 0;
}

int solution(int n)
{
    int answer = 0;

    while( n != 0) {
        answer = answer + (n % 10);
        n /= 10;
    }
    return answer;
}
