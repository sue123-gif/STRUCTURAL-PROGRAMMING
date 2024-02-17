#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                printf("Result: %.2f\n", divide(num1, num2));
            }
            break;
        default:
            printf("Invalid operator entered.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
