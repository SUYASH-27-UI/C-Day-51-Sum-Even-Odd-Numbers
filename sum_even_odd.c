#include <stdio.h>

int main()
{
    int n, number;
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even_sum = even_sum + number;
        }
        else
        {
            odd_sum = odd_sum + number;
        }
    }

    printf("Sum of even numbers = %d\n", even_sum);
    printf("Sum of odd numbers = %d", odd_sum);

    return 0;
}
