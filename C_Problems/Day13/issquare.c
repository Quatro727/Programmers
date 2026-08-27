#include <stdio.h>

int solution(long n);

int main(void)
{
    long num;

    printf("Enter an any number: ");
    scanf("%ld", &num);

    printf("Result: %d\n", solution(num));

    return 0;
}

int solution(long num)
{
    int answer = 2;

    for(int i = 1; i * i  <= num; i++) {
        if(num % i == 0 && num / i == i){
            answer = 1;
            return answer;
        }
    }
    return answer;
}
