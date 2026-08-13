#include <stdio.h>

int evenSum(int n);

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Total sum of even numbers: %d\n", evenSum(num));

    return 0;
}

int evenSum(int n)
{
    int answer = 0;
    int i;

    for(i = 2; i<= n; i++){
        if(i % 2 == 0) answer += i;
    }
    return answer;
}
