#include <stdio.h>
void NotPrime(int num)
{
    if (num < 1)
    {
        printf("%d is not a prime number ", num);
    }
    else if (num < 2)
    {
        printf("%d is not a prime number ", num);
    }
    else
    {
        for (int i = 2; i <= num; i++)

        {
            int prime = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                    prime = 0;
                break;
            }
            if (prime == 0)
            {
                printf("%d is not a Prime Number\n", i);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    NotPrime(n);

    return 0;
}