#include <stdio.h>

int main() 
{
    int num, originalNum, digit;
    int sum = 0, factorial, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) 
    {
        digit = num % 10;

        factorial = 1;
        for(i = 1; i <= digit; i++) 
        {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    if(sum == originalNum)
        printf("%d is a Strong Number.", originalNum);
    else
        printf("%d is not a Strong Number.", originalNum);

    return 0;
}