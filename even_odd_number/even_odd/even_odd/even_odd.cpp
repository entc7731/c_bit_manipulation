#include<stdio.h>

int main()
{
    int a = 0;

    printf("\n Enter a number : ");
    scanf_s("%d", &a);

    // Below method is used because modulus method is costly (requires more power and time to execucte)
    if ((a & 0x01) == 1)
        printf("\n The number is odd.");
    else
        printf("\n The number is even.");

    printf("\n");

    return 0;
}
