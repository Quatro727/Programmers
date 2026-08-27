#include <stdio.h>

int solution(int n, int t);

int main(void)
{
    int num, time;
    long result;

    printf("Initial numbers of bacteria: ");
    scanf("%d", &num);

    printf("Enter a time we spent: ");
    scanf("%d", &time);

    result = solution(num, time);

    printf("Total numbers of bacteria after t hours: %ld\n", result);

    return 0;
}

int solution(int n, int t)
{
    int i;
    int answer = n;

    for(i = 0; i < t; i++) {
        answer = answer * 2;
    }

    return answer;
}
