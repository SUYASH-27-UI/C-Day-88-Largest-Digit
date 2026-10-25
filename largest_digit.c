#include <stdio.h>

int main()
{
    int number, digit, largest = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;

        if (digit > largest)
        {
            largest = digit;
        }

        number = number / 10;
    }

    printf("Largest digit: %d\n", largest);

    return 0;
}
