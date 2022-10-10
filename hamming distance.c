#include <stdio.h>

int main()
{
    int number1;
    int number2;
    while (number1 > 0 && number2 > 0)
    {
        printf("please enter 2 integer: \n");
        scanf("%d %d", &number1, &number2);
        if (number1 < 0 || number2 < 0)
        {
            break;
        }
        int y = numberOfHammers(number1, number2);
        printf("Final value of Hammers: %d \n", y);
    }
}

int numberOfHammers(int number1, int number2)
{
    int xOrNumber = number1 ^ number2;
    int result = 0;
    while (xOrNumber != 0)
    {
        if (xOrNumber % 2 != 0)
        {
            result += 1;
        }
        xOrNumber = xOrNumber / 2;
    }
    return result;
}