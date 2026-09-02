#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 101
#define MAX_SUFFIX_LEN 101

int solution(const char *my_str, const char *is_suffix);

int main(void)
{
    char str[MAX_STR_LEN];
    char str_suffix[MAX_SUFFIX_LEN];
    int result;
    
    printf("Enter a string(string); ");
    scanf("%s", str);

    printf("Enter a string(suffix): ");
    scanf("%s", str_suffix);

    result = solution(str, str_suffix);

    if (result == 1) 
        printf("\"%s\" is suffix of string \"%s\"\n", str_suffix, str);
    else
        printf("\"%s\" is not suffix of string \"%s\"\n", str_suffix, str);

    return 0;
}

int solution(const char *my_str, const char *is_suffix)
{
   int i, j;
   int len_my_str = strlen(my_str);
   int len_suffix = strlen(is_suffix);

   if(len_suffix > len_my_str) {
       return 0;
   }

   if(strcmp(my_str + len_my_str - len_suffix, is_suffix) == 0) {
       return 1;
   }
   
   return 0;

}
