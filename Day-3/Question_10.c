#include <stdio.h>

int main() 
{
    int start, end, i, j, isPrime, found = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) 
    {
        if(i < 2)
            continue;

        isPrime = 1;

        for(j = 2; j <= i / 2; j++) 
        {
            if(i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
      if(isPrime) 
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if(found == 0) 
    {
        printf("No prime numbers found in the given range.");
    }

    return 0;
}