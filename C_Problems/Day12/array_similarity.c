#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 101

int solution(const char *s1[], size_t s1_len, const char *s2[], size_t s2_len);

int main(void)
{
    const char *s1[3] = {"n", "omg"};;
    const char *s2[5] = {"m", "dot"};
    int result; 
    
    result = solution(s1, 2, s2, 2);

    printf("Similarity: %d\n", result);
    return 0;
}

int solution(const char *s1[], size_t s1_len, const char *s2[], size_t s2_len)
{
    int i, j;
    int answer = 0;
    
    for(i = 0; i < s1_len; i++) {
        for(j = 0; j < s2_len; j++) {
            if(!strcmp(s1[i], s2[j]))
                answer++;
        }
    }

    return answer;
}
