#include <stdio.h>
#include <stdbool.h>

bool solution(int num, int n, int m);

int main(void)
{
    int num, n, m;
    bool result;

    printf("Enter a integer(number): ");
    scanf("%d", &num);

    printf("Enter a integer(n): ");
    scanf("%d", &n);

    printf("Enter a integer(m): ");
    scanf("%d", &m);

    result = solution(num, n, m);

    printf("Result: %d\n", result);

    return 0;
}

bool solution(int num, int n, int m)
{
    bool answer = false;

    if(num % n == 0  && num % m == 0)
        answer = true;

    return answer;
}


