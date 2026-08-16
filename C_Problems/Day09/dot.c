#include <stdio.h>

int solution(int a[], int n);

int main(void)
{
    int dot[2];
    int result;

    printf("Enter a x and y: ");
    scanf("%d %d", dot, dot + 1);

    result = solution(dot, 2);

    printf("Result: %d\n", result);

    return  0;
}

int solution(int a[], int n)
{
    if(a[0] > 0 && a[1] > 0) return 1;
    else if(a[0] < 0 && a[1] > 0) return 2;
    else if(a[0] < 0 && a[1] < 0) return 3;
    else return 4;

}

