#include <stdio.h>
#include <string.h>

#define STR_LEN 1001

int solution(const char *my_str);

int main(void)
{
    char str[STR_LEN];
    int result;

    printf("Enter a string: ");
    scanf("%s", str);

    result = solution(str);

    printf("Sum of all integers in str: %d\n", result);
    return 0;
}

int solution(const char *my_str)
{
    int len = strlen(my_str);
    int answer = 0;
    int i;

    for(i = 0; i < len; i++) {
        if(my_str[i] >= 48 && my_str[i] <= 57) {
            answer += (int)my_str[i] - '0';
        }
    }

    return answer;
}

