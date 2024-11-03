#include <stdio.h>
int main()
{
    int n;
    int IsPrime = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n == 1)
    {
        printf("Not a prime number");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                IsPrime = 1;
                break;
            }
        }
    }
    if (IsPrime == 1)
    {
        printf("%d Is not a prime number", n);
    }
    else
    {
        printf("%d Is a prime number", n);
    }

    return 0;
}