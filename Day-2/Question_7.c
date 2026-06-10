#include <stdio.h>

int main() 
{
    int n, digit;
    long long product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) 
    {
        digit = n % 10;      
        product = product * digit;
        n = n / 10;          
    }
    printf("Product of digits = %lld", product);

    return 0;
}