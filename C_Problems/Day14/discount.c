#include <stdio.h>
#include <stdlib.h>

int solution(int price);

int main(void)
{
    int price, result;

    printf("Enter a price: ");
    scanf("%d", &price);

    result = solution(price);

    printf("The price u need to pay: %d\n", result);

    return 0;
}

int solution(int price)
{
    if(price >= 100000 && price < 300000)
        price = price * 95 / 100;
    else if(price >= 300000 && price < 500000)
        price = price * 9 / 10;
    else if(price >= 500000)
        price = price * 4 / 5;
    
    return price;
}

