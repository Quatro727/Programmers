#include <stdio.h>
#include <string.h>

#define LEN 51

int solution(const char* message);

int main(void)
{
    char str[LEN];
    int num;

    printf("Enter a letters: ");
    fgets(str, sizeof(str), stdin);
    
    num = solution(str);

    printf("Minimum length you needed: %dcm\n", num);

    return 0;
}

int solution(const char *message)
{
    int answer = 0;
 
    answer = (strlen(message) - 1) * 2;

    return answer;
}
