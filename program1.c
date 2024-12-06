#include <stdio.h>

// Function declarations
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);

int main() {
    float num1, num2;
    char operator;

    // Get user input
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover whitespace
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

// Function definitions
void add(float a, float b) {
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(float a, float b) {
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(float a, float b) {
    printf("%.2f * %.2f = %.2f\n", a, b, a * b
