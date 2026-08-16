#include <stdio.h>
#include <stdlib.h>

int solution(int n);

int main(void)
{
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = solution(num);

    printf("The number of Ordered pair: %d\n", result);

    return 0;
}

int solution(int n)
{
    int i;
    int cnt = 0;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) cnt++;
    }
    return cnt;
}
