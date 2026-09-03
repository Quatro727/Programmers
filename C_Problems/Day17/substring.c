#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int solution(const char *my_str, const char *target);

int main(void)
{
    int result;
    char str1[MAX_LEN];
    char str2[MAX_LEN];
    
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter a string(target): ");
    scanf("%s", str2);

    result = solution(str1, str2);

    printf("Result: %d\n", result);

    return 0;
}

int solution(const char *my_str, const char *target)
{
    int len_my = strlen(my_str);
    int len_sub = strlen(target);

    if(len_sub > len_my)
        return 0;

    for(int i = 0; i <= len_my - len_sub; i++) {
        if(strncmp(my_str + i, target, len_sub) == 0)
            return 1;
    }
    return 0;
}
