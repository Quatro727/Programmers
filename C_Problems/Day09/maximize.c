#include <stdio.h>

int solution(int num[], int len);

int main(void)
{
   int n, i;
   int result;

   printf("How many?: ");
   scanf("%d", &n);
    
   int num[n];
    
   printf("Enter a numbers: ");
   for(i = 0; i < n; i++) {
        scanf(" %d", num + i);
   }
    
    result = solution(num, n);

    printf("MAX number: %d\n", result);

    return 0;
}

int solution(int num[], int len)
{
    int i, tmp;

    for(i = 0; i < len; i++) {
        if(num[0] < num[i]) {
           tmp = num[0];
           num[0] = num[i];
           num[i] =tmp;
        }
    }
    for(i = 1; i < len; i++) {
        if(num[1] < num[i]) {
            tmp = num[1];
            num[1] = num[i];
            num[i] = tmp;
        }
    }
    return num[0] * num[1];
}

/**************************************************************
 * [Better Solution]
 * int max1 = 0;
 * int max2 = 0;
 *
 * size_t i;
 *
 * for(i = 0; i < numbers_len; i++){
 *      if(numbers[i] > max) {
 *          max2 = max1;
 *          max1 = numbers[i];
 *      }
 *      else if(numbers[i] > max2) {
 *          max2 = numbers[i];
 *      }
 * }
 * return max * max2;
 * ************************************************************/
