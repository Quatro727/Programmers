#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *solution(const char *strlist[], size_t strlist_len);

int main(void)
{
    const char *strlist1[] = {"We", "are", "the", "world!"};
    const char *strlist2[] = {"I", "Love", "Programmers"};
    int i;
    
    int *strlen_list1 = solution(strlist1, 4);
    int *strlen_list2 = solution(strlist2, 3);
    
    for(i = 0; i < 4; i++) {
        printf("%d ", strlen_list1[i]);
    }
    printf("\n");
    free(strlen_list1);
    
    for(i = 0; i < 3; i++) {
        printf("%d ", strlen_list2[i]);
    }
    printf("\n");
    free(strlen_list2);

    return 0;
}

int *solution(const char *strlist[], size_t strlist_len)
{

    int *answer = (int*)malloc(sizeof(int) * strlist_len);
    int i;

    for(i = 0; i < strlist_len; i++) {
        answer[i] = strlen(strlist[i]);
    }

    return answer;
}
