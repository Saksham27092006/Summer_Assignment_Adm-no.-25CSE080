#include <stdio.h>

int main() 
{
    int num, originalNum, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) 
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(sum == originalNum)
        printf("%d is an Armstrong Number.", originalNum);
    else
        printf("%d is not an Armstrong Number.", originalNum);

    return 0;
}