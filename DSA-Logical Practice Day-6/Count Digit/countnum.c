#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int count = 0;
    int tempNum;

    tempNum = n;

    if (n == 0)
    {
        count++;
    }
    else
    {

        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }
    n = tempNum;
    printf("Number of digits in %d is %d", n, count);
    return 0;
}