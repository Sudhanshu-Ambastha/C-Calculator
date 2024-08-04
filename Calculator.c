#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}
