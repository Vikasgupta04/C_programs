// Enter arithmetic operator from user, perform operation on two numbers according to the operator using ternary operator.
#include <stdio.h>

int main()
{
    char op;
    int a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = (op == '+') ? (a + b) : (op == '-') ? (a - b) : (op == '*')   ? (a * b) : (op == '/')   ? (b != 0 ? (a / b) : 0): 0;
    (op == '/' && b == 0) ? printf("Division by zero error\n") : printf("Result: %d\n", result);
    
    return 0;
}
