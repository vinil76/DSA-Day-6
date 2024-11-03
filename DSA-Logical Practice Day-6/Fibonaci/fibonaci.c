#include <stdio.h>

void Fiboc(int num)
{
    int a = 0;
    int b = 1;
    int next = 0;
    if (num <= 0 || num == 1)
    {
        printf("0");
    }
    else if (num == 2)
    {
        printf("1");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            printf("The  %d  number  is   : %d\n", i, a);
            next = a + b;
            a = b;
            b = next;
        }
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Fiboc(num);

    return 0;
}