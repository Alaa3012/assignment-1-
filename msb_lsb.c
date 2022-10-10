#include <stdio.h>
#include <stdbool.h>

int lsb(int);
int msb(int);
int main()
{
    int number;
    printf("enter a positive number: \n");
    scanf("%d", &number);
    printf("the total is : %d", ( msb(number) - lsb(number) ));
}

int lsb(int a)
{
    int total;
    int found;
    bool isFound;
    while (a != 0)
    {
        if (a % 2 != 0 && !isFound)
        {
            found = total;
            isFound = true;
        }
        a = a / 2;
        total += 1;
    }
    return found;
}

int msb(int b)
{
    int found;
    int total;
    while (b != 0)
    {
        if (b % 2 != 0)
        {
            found = total;
        }
        b = b / 2;
        total += 1;
    }
    return found - 1;
}