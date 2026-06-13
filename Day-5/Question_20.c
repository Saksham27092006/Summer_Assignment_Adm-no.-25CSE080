#include <stdio.h>

int main() 
{
    int num, i, largestPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) 
    {
        while(num % i == 0) 
        {
            largestPrimeFactor = i;
            num = num / i;
        }
    }

    if(largestPrimeFactor != -1)
        printf("Largest Prime Factor = %d", largestPrimeFactor);
    else
        printf("No prime factor found.");

    return 0;
}