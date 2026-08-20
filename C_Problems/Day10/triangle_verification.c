#include <stdio.h>

int solution(int sides[], size_t sides_len);

int main(void)
{
    int sides[3];
    int i;
    
    printf("Enter 3 integers: ");
    for(i = 0; i < 3; i++) {
        scanf("%d", sides + i);
    }
    
    printf("Result: %d\n", solution(sides, 3));

    return 0;
}

int solution(int sides[], size_t sides_len)
{
    int i, tmp;
    int answer = 2;

    for(i = 0; i < sides_len; i++) {
        if(sides[0] < sides[i]) {
            tmp = sides[0];
            sides[0] = sides[i];
            sides[i] = tmp;
        }
    }

    if(sides[0] < (sides[1] + sides[2])) answer = 1;

    return answer;
}

