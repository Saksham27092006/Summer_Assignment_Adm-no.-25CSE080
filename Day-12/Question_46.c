#include <stdio.h>

int armstrong(int n)
{
    int original = n, temp, rem;
    int count = 0, sum = 0, power, i;

    temp = n;

    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;

        power = 1;
        for (i = 1; i <= count; i++)
        {
            power = power * rem;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}