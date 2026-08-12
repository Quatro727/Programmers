/********************************************************
 * 01) given a string 'str' and integer variable 'a'
 * 02) prints a string 'a' times repeatdely
 * ******************************************************/

#include <stdio.h>

#define LEN_INPUT 11

int main(void)
{
    char s1[LEN_INPUT];
    int a, i;

    scanf("%s %d", s1, &a);

   for(i = 0; i < a; i++){
       printf("%s", s1);
   }

   return 0;
}

