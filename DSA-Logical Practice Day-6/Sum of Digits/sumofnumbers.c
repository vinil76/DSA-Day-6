#include <stdio.h>
int main()
{
    int n;
    printf("Enter the element: ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit;
    int tempNum;
    tempNum = n;

    if (n == 0)
    {
        sum = 0;
    }
    else
    {
        while (n != 0)
        {
            lastdigit = n % 10;
            sum = sum + lastdigit;
            n = n / 10;
        }
    }
    n = tempNum;
    printf("Sum of digits of %d is %d", tempNum, sum);

    return 0;
}