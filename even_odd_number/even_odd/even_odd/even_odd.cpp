/* Find the number of set bits in a number. */

#include<stdio.h>

int main()
{
    int num = 0;
    int count = 0;
    scanf_s("%d", &num);

    while (num != 0)
    {
        num = num & (num - 1);
        count++;
    }
    printf("%d", count);

    return 0;
}
