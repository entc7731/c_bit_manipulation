/* Is ith bit set in a given number? */

#include<stdio.h>

int main()
{
    int num, i;
    scanf_s("%d %d",&num, &i);

    if (num & (1 << (i - 1)))
        printf("\n YES");
    else
        printf("\n NO");

    return 0;
}
