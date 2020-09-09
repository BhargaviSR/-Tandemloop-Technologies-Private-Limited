#include <stdio.h>
#include <string.h>
int main() 
{
    char type_of_operation;
    double a, b;
    printf("Enter an operator (+, -, *,): ");
    scanf("%s", &type_of_operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    switch (type_of_operation) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;
    default:
        printf("Error! operator is not correct");
      }
    return 0;
    }
