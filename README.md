# C-Day-51-Sum-Even-Odd-Numbers
# C Day 51 - Sum of Even and Odd Numbers

This program takes multiple numbers from the user and calculates the sum of even numbers and odd numbers separately.

## Example

Input:

```text
Enter how many numbers: 5
Enter number 1: 10
Enter number 2: 15
Enter number 3: 20
Enter number 4: 7
Enter number 5: 8
```

Output:

```text
Sum of even numbers = 38
Sum of odd numbers = 22
```

## Concepts Used

* `for` loop
* `if-else`
* Modulus operator `%`
* User input
* Variables
* Even/Odd checking
* Sum calculation

## How It Works

1. Ask the user how many numbers they want to enter.
2. Use a `for` loop to take each number.
3. Check whether the number is even or odd using `% 2`.
4. Add even numbers to `even_sum`.
5. Add odd numbers to `odd_sum`.
6. Print both sums separately.

## C Code

```c
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
```

## Output

```text
Enter how many numbers: 5
Enter number 1: 10
Enter number 2: 15
Enter number 3: 20
Enter number 4: 7
Enter number 5: 8
Sum of even numbers = 38
Sum of odd numbers = 22
```

## Goal

The goal of this project is to practice `for`
